
;<Program title>

jmp start

;data


;code
start: nop

LXI H, 2000H
MVI M, 32H
DCR M
MOV B, M



hlt