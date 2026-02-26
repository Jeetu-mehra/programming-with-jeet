
;<Program title>

jmp start

;data


;code
start: nop

; -------- Part (a) --------
; OR between B (51H) and A (A8H)

MVI A, 0A8H
MVI B, 51H
ORA B
; Result → A = F9H


; -------- Part (b) --------
; OR between 8-bit data (A6H) and A (82H)

MVI A, 82H
ORI 0A6H
; Result → A = A6H


; -------- Part (c) --------
; OR between memory location and A (A = C2H)

LXI H, 2000H
MVI M, 32H

MVI A, 0C2H
ORA M
; Result → A = F2H

hlt