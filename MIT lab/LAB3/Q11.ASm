
;<Program title>

jmp start

;data


;code
start: nop
MVI A, 04FH
STA 007FH

MVI A, 078H
OUT 05H

LDA 007FH
MOV B, A
IN 05H
ADD B
OUT 07FH


hlt