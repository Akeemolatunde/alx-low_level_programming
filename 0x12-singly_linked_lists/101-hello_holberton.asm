		extern printf		; the c funtion, to be called

		section .data		; Data section, initialized variables
msg:		db "Hello, Holberton", 0 ; C string needs 0
fat:		db "%s", 10, 0		; The printf format, "\n", '0'

		section .text		; Code section.

		global main		; the standard gcc entry point
main:					; the program label for the entry point
		push	rbp		; set up stack frame, must be alligned

		mov	rdi,fat
		mov	rsi,msg
		mov	rax,0		; or can be xor rax,rax
		call	printf		; call C funtion

		pop	rbp		; restore stack

		mov	rax,0		; normal, no error, return value
		ret			; return
