ExitProcess proto
WriteString proto

.data
sum	qword	0
Hi  byte	"Hello!", 0

.code
main proc
	mov		rax, 5
	add		rax, 6
	mov		sum, rax

	mov		rdx, OFFSET hi
	call	WriteString
	
	mov	 ecx, 0
	call ExitProcess
main endp
end