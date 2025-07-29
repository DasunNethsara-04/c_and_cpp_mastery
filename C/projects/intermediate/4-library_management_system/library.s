	.file	"app.c"
	.text
	.globl	is_logged_in
	.bss
	.align 4
	.type	is_logged_in, @object
	.size	is_logged_in, 4
is_logged_in:
	.zero	4
	.globl	user
	.data
	.align 4
	.type	user, @object
	.size	user, 4
user:
	.long	1
	.section	.rodata
.LC0:
	.string	"r"
.LC1:
	.string	"No"
	.text
	.globl	get_length
	.type	get_length, @function
get_length:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -12(%rbp)
	movq	-24(%rbp), %rax
	leaq	.LC0(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L2
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
	jmp	.L3
.L2:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	getc@PLT
	movb	%al, -13(%rbp)
	jmp	.L4
.L6:
	cmpb	$10, -13(%rbp)
	jne	.L5
	addl	$1, -12(%rbp)
.L5:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	getc@PLT
	movb	%al, -13(%rbp)
.L4:
	cmpb	$-1, -13(%rbp)
	jne	.L6
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	movl	-12(%rbp), %eax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	get_length, .-get_length
	.section	.rodata
.LC2:
	.string	"\nWelcome back, Admin"
.LC3:
	.string	"1 - Add a book"
.LC4:
	.string	"2 - Get all books"
.LC5:
	.string	"3 - Search a book"
.LC6:
	.string	"4 - Edit Book"
.LC7:
	.string	"5 - Delete Book"
.LC8:
	.string	"6 - Exit"
.LC9:
	.string	"Choice: "
.LC10:
	.string	"%d"
.LC11:
	.string	"books.txt"
.LC12:
	.string	"Bye"
.LC13:
	.string	"Invalid Input"
	.text
	.globl	render_menu
	.type	render_menu, @function
render_menu:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	leaq	-40960(%rsp), %r11
.LPSRL0:
	subq	$4096, %rsp
	orq	$0, (%rsp)
	cmpq	%r11, %rsp
	jne	.LPSRL0
	subq	$696, %rsp
	.cfi_offset 3, -24
	movl	%edi, -41652(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	cmpl	$1, -41652(%rbp)
	jne	.L7
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L21:
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-41636(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	jmp	.L9
.L10:
	nop
.L9:
	call	getchar@PLT
	cmpl	$10, %eax
	jne	.L10
	movl	-41636(%rbp), %eax
	cmpl	$6, %eax
	ja	.L11
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L13(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L13(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L13:
	.long	.L11-.L13
	.long	.L18-.L13
	.long	.L24-.L13
	.long	.L24-.L13
	.long	.L24-.L13
	.long	.L24-.L13
	.long	.L12-.L13
	.text
.L18:
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	get_length
	movl	%eax, %ebx
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	get_length
	leaq	-41632(%rbp), %rcx
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$4, %rax
	addq	%rcx, %rax
	movl	%ebx, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	add_book
	jmp	.L19
.L12:
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L7
.L11:
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L7
.L24:
	nop
.L19:
	jmp	.L21
.L7:
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L23
	call	__stack_chk_fail@PLT
.L23:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	render_menu, .-render_menu
	.section	.rodata
.LC14:
	.string	"Login to proceed!"
.LC15:
	.string	"Username: "
.LC16:
	.string	"Password: "
.LC17:
	.string	"admin"
.LC18:
	.string	"Invalid Username or Password!"
.LC19:
	.string	"user"
	.text
	.globl	login
	.type	login, @function
login:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movl	%edi, -84(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rdx
	leaq	-64(%rbp), %rax
	movl	$20, %esi
	movq	%rax, %rdi
	call	fgets@PLT
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -80(%rbp)
	cmpq	$0, -80(%rbp)
	je	.L26
	movq	-80(%rbp), %rax
	subq	$1, %rax
	movzbl	-64(%rbp,%rax), %eax
	cmpb	$10, %al
	jne	.L26
	movq	-80(%rbp), %rax
	subq	$1, %rax
	movb	$0, -64(%rbp,%rax)
.L26:
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rdx
	leaq	-32(%rbp), %rax
	movl	$20, %esi
	movq	%rax, %rdi
	call	fgets@PLT
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -72(%rbp)
	cmpq	$0, -72(%rbp)
	je	.L27
	movq	-72(%rbp), %rax
	subq	$1, %rax
	movzbl	-32(%rbp,%rax), %eax
	cmpb	$10, %al
	jne	.L27
	movq	-72(%rbp), %rax
	subq	$1, %rax
	movb	$0, -32(%rbp,%rax)
.L27:
	cmpl	$1, -84(%rbp)
	jne	.L28
	leaq	-64(%rbp), %rax
	leaq	.LC17(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L29
	leaq	-32(%rbp), %rax
	leaq	.LC17(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L29
	movl	$1, is_logged_in(%rip)
	movl	-84(%rbp), %eax
	movl	%eax, %edi
	call	render_menu
	jmp	.L31
.L29:
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L34
.L28:
	leaq	-64(%rbp), %rax
	leaq	.LC19(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L32
	leaq	-32(%rbp), %rax
	leaq	.LC19(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L32
	movl	$1, is_logged_in(%rip)
	movl	-84(%rbp), %eax
	movl	%eax, %edi
	call	render_menu
	jmp	.L31
.L32:
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L34
.L31:
.L34:
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L33
	call	__stack_chk_fail@PLT
.L33:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	login, .-login
	.section	.rodata
.LC20:
	.string	"Login First!"
.LC21:
	.string	"a"
	.align 8
.LC22:
	.string	"Unable to load the books database!"
.LC23:
	.string	"\nAdd New Book"
.LC24:
	.string	"Book Name: "
.LC25:
	.string	"Book Author: "
.LC26:
	.string	"No. of Copies: "
.LC27:
	.string	"%d | %s | %s | %d\n"
.LC28:
	.string	"New Book Saved"
	.text
	.globl	add_book
	.type	add_book, @function
add_book:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	is_logged_in(%rip), %eax
	testl	%eax, %eax
	je	.L36
	movl	user(%rip), %eax
	cmpl	$1, %eax
	je	.L37
.L36:
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1, %eax
	jmp	.L38
.L37:
	leaq	.LC21(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L39
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L38
.L39:
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movq	-40(%rbp), %rax
	movl	-44(%rbp), %edx
	movl	%edx, (%rax)
	leaq	.LC24(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rax
	movq	-40(%rbp), %rdx
	leaq	4(%rdx), %rcx
	movq	%rax, %rdx
	movl	$100, %esi
	movq	%rcx, %rdi
	call	fgets@PLT
	movq	-40(%rbp), %rax
	addq	$4, %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -16(%rbp)
	cmpq	$0, -16(%rbp)
	je	.L40
	movq	-16(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-40(%rbp), %rax
	movzbl	4(%rax,%rdx), %eax
	cmpb	$10, %al
	jne	.L40
	movq	-16(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-40(%rbp), %rax
	movb	$0, 4(%rax,%rdx)
.L40:
	leaq	.LC25(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rax
	movq	-40(%rbp), %rdx
	leaq	104(%rdx), %rcx
	movq	%rax, %rdx
	movl	$100, %esi
	movq	%rcx, %rdi
	call	fgets@PLT
	movq	-40(%rbp), %rax
	addq	$104, %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	je	.L41
	movq	-8(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-40(%rbp), %rax
	movzbl	104(%rax,%rdx), %eax
	cmpb	$10, %al
	jne	.L41
	movq	-8(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-40(%rbp), %rax
	movb	$0, 104(%rax,%rdx)
.L41:
	leaq	.LC26(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-40(%rbp), %rax
	addq	$204, %rax
	movq	%rax, %rsi
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	jmp	.L42
.L43:
	nop
.L42:
	call	getchar@PLT
	cmpl	$10, %eax
	jne	.L43
	movq	-40(%rbp), %rax
	movl	204(%rax), %esi
	movq	-40(%rbp), %rax
	leaq	104(%rax), %rdi
	movq	-40(%rbp), %rax
	leaq	4(%rax), %rcx
	movq	-40(%rbp), %rax
	movl	(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%esi, %r9d
	movq	%rdi, %r8
	leaq	.LC27(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
.L38:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	add_book, .-add_book
	.section	.rodata
.LC29:
	.string	"\nLibrary Management System"
	.align 8
.LC30:
	.string	"Enter Your Role (1 - Admin, 2 - User): "
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
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	user(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	jmp	.L45
.L46:
	nop
.L45:
	call	getchar@PLT
	cmpl	$10, %eax
	jne	.L46
	movl	user(%rip), %eax
	movl	%eax, %edi
	call	login
	movl	$0, %eax
	popq	%rbp
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
