
;<Program title>

jmp start

;data


;code
start: nop

; -------- Part (a) --------
; XOR between D (77H) and A (56H)

MVI A, 56H
MVI D, 77H
XRA D
; Result → A = 21H


; -------- Part (b) --------
; XOR between 8-bit data (8FH) and A (A2H)

MVI A, 0A2H
XRI 08FH
; Result → A = 2DH


; -------- Part (c) --------
; XOR between memory location and A (A = 4AH)

LXI H, 2000H
MVI M, 32H      ; memory value assumed 32H

MVI A, 4AH
XRA M
; Result → A = 78H


hlt