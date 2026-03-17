
;<Program title>

jmp start

;data


;code
start: nop
MVI B,05H
MVI C,04H

MVI A,00H

LOOP: ADD B
DCR C
JNZ LOOP

hlt