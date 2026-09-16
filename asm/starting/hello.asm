section .data
    text db "Hello World",10

section .text
    global _start

_start:
    mov rax, 1              ; syscall: write
    mov rdi, 1              ; file descriptor: stdout
    mov rsi, text            ; pointer to message
    mov rdx, 13             ; message length
    syscall

    mov rax, 60             ; syscall: exit
    mov rdi, 0              ; exit code: 0
    syscall
