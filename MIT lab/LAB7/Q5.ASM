
;<Program title>

jmp start

;data


;code
start: nop
; -------------------------------
; Store data at 2050H – 2057H
; -------------------------------
LXI H, 2050H
MVI M, 80H
INX H
MVI M, 52H
INX H
MVI M, 0E8H
INX H
MVI M, 78H
INX H
MVI M, 0F2H
INX H
MVI M, 67H
INX H
MVI M, 35H
INX H
MVI M, 62H
; -------------------------------
; Filter data (D7=0 AND D0=0)
; -------------------------------
LXI H, 2050H     ; Source
LXI D, 2060H     ; Destination
MVI C, 08H       ; Counter = 8

LOOP: MOV A, M   ; Load data

      ANI 80H    ; Check D7
      JNZ SKIP   ; If D7=1 → reject

      MOV A, M   ; Reload original
      ANI 01H    ; Check D0
      JNZ SKIP   ; If D0=1 → reject

      MOV A, M   ; Reload original
      STAX D     ; Store valid data
      INX D

SKIP: INX H
      DCR C
      JNZ LOOP
HLT