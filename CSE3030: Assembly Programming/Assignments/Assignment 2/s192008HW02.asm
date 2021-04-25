TITLE s192008_HW02 Polynomial 
; solve F(x) = 90x1 - 30x2 + 29x3

INCLUDE Irvine32.inc
INCLUDE CSE3030_PHW02.inc

.code
main PROC
	mov ebx, x3	; ebx = x3
	sub ebx, x2	; ebx = x3 - x2
	mov eax, x1	; eax = x1
	add eax, x1	; eax = x1 + x1 = 2x1
	add eax, x1	; eax = x1 + x1 + x1 = 3x1
	add eax, eax	; eax = 3x1 x 2 = 6x1
	add ebx, eax	; ebx = (x3 - x2) + 6x1 = 6x1 - x2 + x3 
	sub ebx, x2	; ebx = (6x1 - x2 + x3) - x2 = 6x1 - 2x2 + x3
	add ebx, ebx	; ebx = (6x1 - 2x2 + x3) x 2 = 12x1 - 4x2 + 2x3
	add ebx, ebx	; ebx = (12x1 - 4x2 + 2x3) x 2 = 24x1 - 8x2 + 4x3
	add ebx, ebx	; ebx = (24x1 - 8x2 + 4x3) x 2 = 48x1 - 16x2 + 8x3
	add ebx, ebx	; ebx = (48x1 - 16x2 + 8x3) x 2 = 96x1 - 32x2 + 16x3
	sub ebx, eax	; ebx = (96x1 - 32x2 + 16x3) - 6x1 = 90x1 - 32x2 + 16x3
	sub ebx, x2	; ebx = (90x1 - 32x2 + 16x3) - x2 = 90x1 - 31x2 + 16x3
	sub ebx, x2	; ebx = (90x1 - 31x2 + 16x3) - x2 = 90x1 - 30x2 + 16x3
	add ebx, x3	; ebx = (90x1 - 30x2 + 16x3) + x3 = 90x1 - 30x2 + 17x3
	add ebx, x3	; ebx = (90x1 - 30x2 + 17x3) + x3 = 90x1 - 30x2 + 18x3
	add ebx, x3	; ebx = (90x1 - 30x2 + 18x3) + x3 = 90x1 - 30x2 + 19x3
	call WriteInt	; return eax
	exit
main ENDP
END main
