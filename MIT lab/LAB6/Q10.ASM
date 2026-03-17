
;<Program title>

jmp start

;data


;code
start: nop
MVI A,05H

ANI 01H

JZ EVEN

MVI A,01H
STA 3000H
HLT

EVEN: MVI A,00H
STA 3000H

hlt