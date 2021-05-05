; AddTwoSum_64.asm - Chapter 3 example.

ExitProcess PROTO

.data
sum QWORD 0

.code 
main PROC
	mov rax, 5
	add rax, 6
	mov sum, rax

	mov rcx, 0
	call ExitProcess
main ENDP
END