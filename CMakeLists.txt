cmake_minimum_required(VERSION 3.20)
project(acnl C CXX OBJCXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Configured by tools/build.py: the game, the 3dsrecomp checkout (runtime) and the prepared recompiled code.
set(GAME acnl CACHE STRING "games/<GAME>")
set(RECOMP_DIR ${CMAKE_SOURCE_DIR}/../3dsrecomp CACHE PATH "3dsrecomp checkout")
set(GAMECODE_DIR ${CMAKE_SOURCE_DIR}/build/${GAME}/gamecode CACHE PATH "recompiled code with the rewritten originals renamed")
set(GAME_TID "*" CACHE STRING "title id (shader lists in RECOMP_DIR/games/<tid>)")

# The recompiled code.
file(GLOB GEN_SRC CONFIGURE_DEPENDS ${GAMECODE_DIR}/*.c)
add_library(gamecode STATIC ${GEN_SRC})
target_include_directories(gamecode PRIVATE ${RECOMP_DIR}/runtime ${GAMECODE_DIR})
target_compile_options(gamecode PRIVATE -O2 -w -ffp-contract=off -fno-strict-aliasing -std=gnu11)

# The rewritten code: same floating-point and overflow semantics as the console.
file(GLOB_RECURSE GAME_SRC CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/games/${GAME}/src/*.cpp)
add_library(rewrite STATIC ${GAME_SRC} ${CMAKE_SOURCE_DIR}/guest/src/runtime.cpp)
target_include_directories(rewrite PUBLIC ${CMAKE_SOURCE_DIR}/guest/include ${CMAKE_SOURCE_DIR}/games/${GAME}/src ${RECOMP_DIR}/runtime)
target_compile_options(rewrite PRIVATE -O2 -g -Wall -Wextra -Wno-unused-parameter -ffp-contract=off -fwrapv -fno-strict-aliasing)

# The 3dsrecomp runtime, unchanged.
file(GLOB RT_SRC CONFIGURE_DEPENDS ${RECOMP_DIR}/runtime/*.cpp ${RECOMP_DIR}/runtime/*.mm ${RECOMP_DIR}/runtime/services/*.cpp
     ${RECOMP_DIR}/runtime/gpu/*.cpp ${RECOMP_DIR}/runtime/gpu/*.mm ${RECOMP_DIR}/runtime/audio/*.cpp)
add_executable(${GAME} ${RT_SRC})
target_include_directories(${GAME} PRIVATE ${RECOMP_DIR}/runtime)
target_compile_options(${GAME} PRIVATE -O2 -g -w)
foreach(f ${RT_SRC})
  if(f MATCHES "\\.mm$")
    set_source_files_properties(${f} PROPERTIES COMPILE_OPTIONS "-fobjc-arc")
  endif()
endforeach()
find_package(SDL3 REQUIRED CONFIG)
target_link_libraries(${GAME} PRIVATE -Wl,-force_load rewrite gamecode SDL3::SDL3 "-framework Metal" "-framework Foundation"
                      "-framework AppKit" "-framework CoreText" "-Wl,-export_dynamic")
target_compile_definitions(${GAME} PRIVATE RECOMP_SOURCE_DIR="${RECOMP_DIR}" RECOMP_GAME="${GAME}")

# Shaders precompiled from the game's pipeline lists, as in 3dsrecomp.
file(GLOB PIPELINE_LISTS ${RECOMP_DIR}/games/${GAME_TID}/pipelines.bin ${RECOMP_DIR}/games/${GAME_TID}/vsprograms.bin)
execute_process(COMMAND xcrun -f metal RESULT_VARIABLE METAL_RC OUTPUT_QUIET ERROR_QUIET)
if(PIPELINE_LISTS AND METAL_RC EQUAL 0)
  add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/shaders.metallib
    COMMAND ${GAME} --emit-shaders ${CMAKE_BINARY_DIR}/shaders ${PIPELINE_LISTS}
    COMMAND sh ${RECOMP_DIR}/tools/build_metallib.sh ${CMAKE_BINARY_DIR}/shaders ${CMAKE_BINARY_DIR}/shaders.metallib
    DEPENDS ${GAME} ${PIPELINE_LISTS}
    COMMENT "Precompiling shaders")
  add_custom_target(shaders ALL DEPENDS ${CMAKE_BINARY_DIR}/shaders.metallib)
endif()
