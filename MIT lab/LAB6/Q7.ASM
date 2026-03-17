
;<Program title>

jmp start

;data


;code
start: nop
LXI H,2000H
MOV B,M

INX H
MOV A,M
MOV C,A
MOV D,A

DCR B

LOOP: INX H
MOV A,M

CMP C
JC SKIP1
MOV C,A

SKIP1: CMP D
JNC SKIP2
MOV D,A

SKIP2: DCR B
JNZ LOOP

hlt