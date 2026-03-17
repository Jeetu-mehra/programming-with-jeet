
;<Program title>

jmp start

;data


;code
start: nop

MVI B,02H
MVI C,08H

MVI D,00H

LOOP: MOV A,C
SUB B
JC END

MOV C,A
INR D
JMP LOOP

END: HLT