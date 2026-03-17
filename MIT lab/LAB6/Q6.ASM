
;<Program title>

jmp start

;data


;code
start: nop
MVI B,03H
MVI C,02H

MVI A,00H

LOOP: RAR
JNC SKIP
ADD B

SKIP: DCR C
JNZ LOOP

hlt