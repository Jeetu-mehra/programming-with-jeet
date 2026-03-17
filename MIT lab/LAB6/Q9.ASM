
;<Program title>

jmp start

;data


;code
start: nop
LXI H,2001H
LXI D,3001H
MVI B,05H

LOOP: MOV A,M
STAX D

INX H
INX D
DCR B

JNZ LOOP

hlt