	.file	"app.c"
	.text
	.section	.rodata
.LC0:
	.string	"\nSave a new Contact"
.LC1:
	.string	"Enter Name: "
.LC2:
	.string	"Enter Number: "
.LC3:
	.string	"Contact Saved as %s - %s\n"
	.text
	.globl	add_contact
	.type	add_contact, @function
add_contact:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rdx
	movq	-24(%rbp), %rax
	movl	$50, %esi
	movq	%rax, %rdi
	call	fgets@PLT
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L2
	movq	-16(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$10, %al
	jne	.L2
	movq	-16(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
.L2:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rdx
	movq	-32(%rbp), %rax
	movl	$12, %esi
	movq	%rax, %rdi
	call	fgets@PLT
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L3
	movq	-8(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$10, %al
	jne	.L3
	movq	-8(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movb	$0, (%rax)
.L3:
	movq	-40(%rbp), %rax
	movl	(%rax), %eax
	leal	1(%rax), %edx
	movq	-40(%rbp), %rax
	movl	%edx, (%rax)
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	add_contact, .-add_contact
	.section	.rodata
.LC4:
	.string	"No Contacts!"
.LC5:
	.string	"\nContact Book"
.LC6:
	.string	"%d. %s - %s\n"
	.text
	.globl	show_all
	.type	show_all, @function
show_all:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	cmpl	$0, -36(%rbp)
	jg	.L5
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L5:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, -4(%rbp)
	jmp	.L6
.L7:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -4(%rbp)
.L6:
	movl	-4(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L7
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	show_all, .-show_all
	.section	.rodata
.LC7:
	.string	"\nSearch Contact by Name"
.LC8:
	.string	"Contact Not Found!"
	.text
	.globl	search_by_name
	.type	search_by_name, @function
search_by_name:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movq	%rdi, -88(%rbp)
	movq	%rsi, -96(%rbp)
	movl	%edx, -100(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rdx
	leaq	-64(%rbp), %rax
	movl	$50, %esi
	movq	%rax, %rdi
	call	fgets@PLT
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -72(%rbp)
	cmpq	$0, -72(%rbp)
	je	.L9
	movq	-72(%rbp), %rax
	subq	$1, %rax
	movzbl	-64(%rbp,%rax), %eax
	cmpb	$10, %al
	jne	.L9
	movq	-72(%rbp), %rax
	subq	$1, %rax
	movb	$0, -64(%rbp,%rax)
.L9:
	movl	$0, -76(%rbp)
	jmp	.L10
.L13:
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	movq	-88(%rbp), %rax
	addq	%rax, %rdx
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L11
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-96(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	movq	-88(%rbp), %rax
	addq	%rax, %rdx
	movl	-76(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	jmp	.L14
.L11:
	addl	$1, -76(%rbp)
.L10:
	movl	-76(%rbp), %eax
	cmpl	-100(%rbp), %eax
	jl	.L13
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
.L14:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L15
	call	__stack_chk_fail@PLT
.L15:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	search_by_name, .-search_by_name
	.section	.rodata
.LC9:
	.string	"\nDelete Contact"
.LC10:
	.string	"Contact Deleted!"
	.text
	.globl	delete_contact
	.type	delete_contact, @function
delete_contact:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movq	%rdi, -88(%rbp)
	movq	%rsi, -96(%rbp)
	movq	%rdx, -104(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rdx
	leaq	-64(%rbp), %rax
	movl	$50, %esi
	movq	%rax, %rdi
	call	fgets@PLT
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -72(%rbp)
	cmpq	$0, -72(%rbp)
	je	.L17
	movq	-72(%rbp), %rax
	subq	$1, %rax
	movzbl	-64(%rbp,%rax), %eax
	cmpb	$10, %al
	jne	.L17
	movq	-72(%rbp), %rax
	subq	$1, %rax
	movb	$0, -64(%rbp,%rax)
.L17:
	movl	$0, -76(%rbp)
	jmp	.L18
.L20:
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	movq	-88(%rbp), %rax
	addq	%rax, %rdx
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L19
	movl	-76(%rbp), %eax
	cltq
	leaq	1(%rax), %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	movq	-88(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rax, %rax
	movq	%rax, %rdx
	movq	-88(%rbp), %rax
	addq	%rdx, %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	strcpy@PLT
	movl	-76(%rbp), %eax
	cltq
	leaq	1(%rax), %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-96(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	movq	%rax, %rdx
	movq	-96(%rbp), %rax
	addq	%rdx, %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	strcpy@PLT
.L19:
	addl	$1, -76(%rbp)
.L18:
	movq	-104(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, -76(%rbp)
	jl	.L20
	movq	-104(%rbp), %rax
	movl	(%rax), %eax
	leal	-1(%rax), %edx
	movq	-104(%rbp), %rax
	movl	%edx, (%rax)
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L21
	call	__stack_chk_fail@PLT
.L21:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	delete_contact, .-delete_contact
	.section	.rodata
.LC11:
	.string	"\nCLI Phone Book"
.LC12:
	.string	"Choose an option to continue!"
.LC13:
	.string	"1 - Create New Contact"
.LC14:
	.string	"2 - Show all contacts"
.LC15:
	.string	"3 - Search by Name"
.LC16:
	.string	"4 - Delete Contact"
.LC17:
	.string	"5 - Exit"
.LC18:
	.string	"Choice: "
.LC19:
	.string	"%d"
.LC20:
	.string	"Bye!"
.LC21:
	.string	"Invalid Choice"
	.text
	.globl	main
	.type	main, @function
main:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$4096, %rsp
	orq	$0, (%rsp)
	subq	$2128, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -6216(%rbp)
.L34:
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-6212(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	jmp	.L23
.L24:
	nop
.L23:
	call	getchar@PLT
	cmpl	$10, %eax
	jne	.L24
	movl	-6212(%rbp), %eax
	cmpl	$5, %eax
	ja	.L25
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L27(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L27(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L27:
	.long	.L25-.L27
	.long	.L31-.L27
	.long	.L30-.L27
	.long	.L29-.L27
	.long	.L28-.L27
	.long	.L26-.L27
	.text
.L31:
	movl	-6216(%rbp), %eax
	leaq	-6208(%rbp), %rcx
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	leaq	(%rcx,%rax), %rsi
	movl	-6216(%rbp), %eax
	leaq	-5008(%rbp), %rcx
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	leaq	0(,%rax,4), %rdx
	addq	%rdx, %rax
	addq	%rax, %rax
	addq	%rax, %rcx
	leaq	-6216(%rbp), %rax
	movq	%rax, %rdx
	movq	%rcx, %rdi
	call	add_contact
	jmp	.L32
.L30:
	movl	-6216(%rbp), %edx
	leaq	-6208(%rbp), %rcx
	leaq	-5008(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	show_all
	jmp	.L32
.L29:
	movl	-6216(%rbp), %edx
	leaq	-6208(%rbp), %rcx
	leaq	-5008(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	search_by_name
	jmp	.L32
.L28:
	leaq	-6216(%rbp), %rdx
	leaq	-6208(%rbp), %rcx
	leaq	-5008(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	delete_contact
	jmp	.L32
.L26:
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
	jmp	.L35
.L25:
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L35
.L32:
	jmp	.L34
.L35:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L36
	call	__stack_chk_fail@PLT
.L36:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
