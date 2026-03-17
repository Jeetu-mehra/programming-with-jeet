
;<Program title>

jmp start

;data


;code
start: nop
MVI D,09BH
MVI E,0A7H

MOV A,D
ADD E

JNC DISPLAY
MVI A,01H
OUT 00H
HLT

DISPLAY: OUT 00H


hlt