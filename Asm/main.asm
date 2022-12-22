global main
extern scanf
extern printf

section .data
    askString db "String: ", 0x00 
	askInteger db "Number: ", 0x00

	formatString db "%s", 0x00
	formatInteger db "%d", 0x00

	outputString db "Your String: %s", 0x0a, 0x00
	outputInteger db "Your Number: %d", 0x0a, 0x00

section .bss
	inputInteger resb 4
	inputString  resb 512

section .text
main:
		push rbp
		mov rbp, rsp
		sub rsp, 16

		lea rdi, [askInteger]
		mov eax, 0
		call printf

		lea rdi, [formatInteger]
		lea rsi, [inputInteger]
		mov eax, 0
		call scanf


		lea rdi, [outputInteger]
		mov rsi, [inputInteger]
		mov eax, 0
		call printf
		
		lea rdi, [askString]
		mov eax, 0
		call printf

		lea rdi, [formatString]
		lea rsi, [inputString]
		mov eax, 0
		call scanf


		lea rdi, [outputString]
		lea rsi, [inputString]
		mov eax, 0
		call printf
		mov rax,0
		leave
		ret