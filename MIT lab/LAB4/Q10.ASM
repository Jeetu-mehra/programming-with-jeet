
;<Program title>

jmp start

;data


;code
start: nop

MVI C, 08BH
MVI D, 06FH

INR C

MOV A, C
ADD D

OUT 1FH

hlt