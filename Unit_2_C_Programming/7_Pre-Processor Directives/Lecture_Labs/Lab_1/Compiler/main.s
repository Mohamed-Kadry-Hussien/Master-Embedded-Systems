	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Enter the first number\0"
LC1:
	.ascii "Enter the second number\0"
	.align 4
LC2:
	.ascii "The sum of the first number and second number is %d\0"
LC4:
	.ascii "\12the time taken is %0.7f\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	call	_clock
	movl	%eax, 44(%esp)
	movl	$LC0, (%esp)
	call	_puts
	movl	$5, 40(%esp)
	movl	$LC1, (%esp)
	call	_puts
	movl	$10, 36(%esp)
	movl	40(%esp), %edx
	movl	36(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 32(%esp)
	movl	32(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	call	_clock
	movl	%eax, 28(%esp)
	movl	28(%esp), %eax
	subl	44(%esp), %eax
	movl	%eax, 24(%esp)
	fildl	24(%esp)
	fldl	LC3
	fdivrp	%st, %st(1)
	fstpl	16(%esp)
	fldl	16(%esp)
	fstpl	4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.section .rdata,"dr"
	.align 8
LC3:
	.long	0
	.long	1083129856
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_clock;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
