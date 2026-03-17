
;<Program title>

jmp start

;data


;code
start: nop
CMC
CMC
MVI B,0FFH
INR B

JNC DISPLAY
MVI A,01H
OUT 00H
HLT

DISPLAY: MOV A,B
OUT 00H

hlt