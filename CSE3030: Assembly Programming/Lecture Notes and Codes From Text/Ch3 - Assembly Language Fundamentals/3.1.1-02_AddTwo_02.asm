.data				; this is the data area
sum DWORD 0			; create a variable named sum
	
.code				; this is the code area
main PROC
	mov eax, 5		; move 5 to the eax register
	add eax, 6		; add 6 to the eax register
	mov sum, eax		; mov eax register to variable sum

	INVOKE ExitProcess	; end the program
main ENDP