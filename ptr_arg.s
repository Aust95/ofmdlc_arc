	.file	"ptr_arg.c"
	.text
	.p2align 4,,15
	.type	my_strlen, @function
my_strlen:
.LFB0:
	.cfi_startproc
	cmpb	$0, (%rdi)
	leaq	1(%rdi), %rdx
	je	.L4
	movl	$1, %ecx
	subl	%edx, %ecx
	.p2align 4,,10
	.p2align 3
.L3:
	leal	(%rcx,%rdx), %eax
	addq	$1, %rdx
	cmpb	$0, -1(%rdx)
	jne	.L3
	ret
.L4:
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	my_strlen, .-my_strlen
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"string %s tem %d bytes.\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	subq	$152, %rsp
	.cfi_def_cfa_offset 160
	movl	$14, %ecx
	movq	%fs:40, %rax
	movq	%rax, 136(%rsp)
	xorl	%eax, %eax
	movq	%rsp, %rsi
	movq	$0, 12(%rsp)
	leaq	16(%rsi), %rdi
	movq	$0, 120(%rsi)
	rep stosq
	movq	%rsi, %rdi
	movl	$1919906917, 8(%rsp)
	movabsq	$8511923645553405779, %rax
	movq	%rax, (%rsp)
	movb	$0, 12(%rsp)
	call	my_strlen
	leaq	.LC0(%rip), %rdi
	movl	%eax, %edx
	xorl	%eax, %eax
	call	printf@PLT
	movq	136(%rsp), %rdx
	xorq	%fs:40, %rdx
	jne	.L10
	xorl	%eax, %eax
	addq	$152, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L10:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 8.2.1 20180831"
	.section	.note.GNU-stack,"",@progbits
