
;<Program title>

jmp start

;data


;code
start: nop

MVI B, 0FFH
MVI A, 01H

ADD B

MVI D, 02H

ADC D

hlt