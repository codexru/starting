void _start() {
 __asm__ volatile (
  "mov $1, %%rax\n"
  "mov $1, %%rdi\n"
  "lea msg(%%rip), %%rsi\n"
  "mov $12, %%rdx\n"
  "syscall\n"

  "mov $60, %%rax\n"
  "xor %%rdi, %%rdi\n"
  "syscall\n" 

  ::: "rax", "rdi", "rsi", "rdx"

 );
}

__asm__(
 ".section .rodata\n"
 "msg:\n"
 ".ascii \"Hello World\\n\"\n"
);
