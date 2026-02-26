
;<Program title>

jmp start

;data


;code
start: nop

; -------- Part (a) --------
; Compare contents of register with A
; Assume A = 32H, B = 32H

MVI A, 32H
MVI B, 32H
CMP B
; Only flags change, A unchanged


; -------- Part (b) --------
; Compare 8-bit data with A

CPI 32H
; Only flags change


; -------- Part (c) --------
; Complement contents of A

CMA
; A becomes complement


; -------- Part (d) --------
; Complement Carry

CMC


hlt