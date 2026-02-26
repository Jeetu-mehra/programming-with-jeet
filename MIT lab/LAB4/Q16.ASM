
;<Program title>

jmp start

;data


;code
start: nop

; Load first 16-bit number in HL
LXI H, 3254H

; Load second 16-bit number in DE
LXI D, 3210H

; 16-bit addition → HL = HL + DE
DAD D

hlt