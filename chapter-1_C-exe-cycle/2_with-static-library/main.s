	.file	"main.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter two numbers: "
.LC1:
	.string	"%d %d"
.LC2:
	.string	"%d + %d = %d\n"
.LC3:
	.string	"%d - %d = %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -12(%rbp)
	movl	$0, -16(%rbp)
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	leaq	-16(%rbp), %rdx
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc23_scanf
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	summation
	movl	%eax, -4(%rbp)
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	substraction
	movl	%eax, -8(%rbp)
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	movl	-4(%rbp), %ecx
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	__isoc23_scanf
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	movl	-8(%rbp), %ecx
	movl	%eax, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	__isoc23_scanf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 15.2.1 20251211 (Red Hat 15.2.1-5)"
	.section	.note.GNU-stack,"",@progbits
