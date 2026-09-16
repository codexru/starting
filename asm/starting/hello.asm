section .data
    msg db "Hello World", 0xA

section .text
    global _start

_start:
    mov rax, 1              ; syscall: write
    mov rdi, 1              ; file descriptor: stdout
    mov rsi, msg            ; pointer to message
    mov rdx, 12            ; message length
    syscall

    mov rax, 60             ; syscall: exit
    mov rdi, 0              ; exit code: 0
    syscall
