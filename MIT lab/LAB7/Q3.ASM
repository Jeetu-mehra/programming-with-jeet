
;<Program title>

jmp start

;data


;code
start: nop
; -------------------------------
; Store data at 2060H – 2064H
; -------------------------------

LXI H, 2060H
MVI M, 1AH
INX H
MVI M, 32H
INX H
MVI M, 4FH
INX H
MVI M, 1EH
INX H
MVI M, 27H


; -------------------------------
; Add 5 numbers
; -------------------------------

LXI H, 2060H     ; HL → start
MVI C, 05H       ; Counter = 5

MVI A, 00H       ; Clear accumulator

LOOP: ADD M      ; A = A + M
      INX H
      DCR C
      JNZ LOOP

STA 2070H        ; Store result at 2070H

HLT

hlt