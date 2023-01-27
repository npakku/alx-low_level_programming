segment .data
	message db "Hello, Holberton", 10

segment .text
extern printf
extern exit

global main
main:
	mov rax, 0
	mov rdi, message
	call printf

	mov rax, 0
	mov rdi, 0
	call exit
