
;<Program title>

jmp start

;data


;code
start: nop
MVI B,0AH
MVI A,00H

LOOP: ADD B
DCR B
JNZ LOOP

hlt