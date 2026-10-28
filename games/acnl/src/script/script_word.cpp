#include "script/script_word.hpp"

void ScriptWord::reset() {
    kind = KIND_DEFAULT;
    value_4 = UNSET;
    value_8 = UNSET;
}
GUEST_EXPORT(0x005f4bdc, ScriptWord::reset);

// The constructor: the same initial state as reset().
ScriptWord &construct_script_word(ScriptWord &self) {
    self.kind = ScriptWord::KIND_DEFAULT;
    self.value_4 = ScriptWord::UNSET;
    self.value_8 = ScriptWord::UNSET;
    return self;
}
GUEST_EXPORT(0x005f4bfc, construct_script_word);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x005f4bdc, 200, [](guest::Fuzz &f) { f.arguments(f.object<ScriptWord>()); });
GUEST_FUZZ(0x005f4bfc, 200, [](guest::Fuzz &f) { f.arguments(f.object<ScriptWord>()); });
