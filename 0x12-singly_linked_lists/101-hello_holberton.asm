section .data
    format db "Hello, Holberton", 0xA, 0 ; Format string with newline character and null terminator

section .text
    extern printf
    global main

main:
    ; Prepare arguments for printf
    mov edi, format ; First argument: address of the format string
    xor eax, eax    ; Clear eax register (no floating-point arguments)
    call printf     ; Call the printf function

    ; Exit the program
    xor edi, edi    ; Exit status 0
    mov eax, 60     ; System call number for exit
    syscall
