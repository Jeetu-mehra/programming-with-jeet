
;<Program title>

jmp start

;data


;code
start: nop
MVI A,32H 
STA 003FH 
MVI A,00H 
LDA 003FH 

hlt