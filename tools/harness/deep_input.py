"""The scripted input of a deep run: mashing A through the intro, typing the player's and the town's name, choosing
the town's place on the map. The game reaches the town hall conversation at about frame 90,000.

    python3 tools/harness/deep_input.py 100000     # the RECOMP_INPUT string up to that frame
"""
import sys

end = int(sys.argv[1]) if len(sys.argv) > 1 else 100000
events=[('TEXT_Test',16600),('T@262/222:8',16900),('TEXT_Town',44000),('T@262/222:8',44300),('T@250/215:8',52000),('T@250/215:8',60000)]
a=[]
f=600
ev=sorted(events,key=lambda e:e[1])
for name,fr in ev: a.append('%d:%s'%(fr,name) if ':' not in name else '%d:%s'%(fr,name))
for f in range(600,end,70):
    if not any(abs(f-fr)<150 for _,fr in ev): a.append('%d:A:6'%f)
print(','.join(a))
