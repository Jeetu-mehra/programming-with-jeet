
;<Program title>

jmp start

;data


;code
start: nop
; -------------------------------
; Store data at 2000H – 2009H
; -------------------------------
LXI H, 2000H
MVI M, 02H
INX H
MVI M, 05H
INX H
MVI M, 33H
INX H
MVI M, 05H
INX H
MVI M, 40H
INX H
MVI M, 50H
INX H
MVI M, 60H
INX H
MVI M, 80H
INX H
MVI M, 05H
INX H
MVI M, 05H
; -------------------------------
; Count occurrences of 05H
; -------------------------------
LXI H, 2000H     ; HL → start
MVI C, 0AH       ; Counter = 10
MVI B, 00H       ; B = count
LOOP: MOV A, M   ; Load data
      CPI 05H    ; Compare with 05H
      JNZ SKIP   ; If not equal, skip
      INR B      ; Increment count

SKIP: INX H      ; Next memory
      DCR C
      JNZ LOOP

MOV A, B
STA 2010H        ; Store result

HLT

hlt