	.file	"app.c"
	.text
	.section	.rodata
.LC0:
	.string	"r"
.LC1:
	.string	"contacts.txt"
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
	subq	$16, %rsp
	movl	$0, -12(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L2
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
	.string	"a"
.LC3:
	.string	"Unable to load the database!"
.LC4:
	.string	"\nSave a new contact"
.LC5:
	.string	"Enter Name: "
.LC6:
	.string	"Enter Number: "
.LC7:
	.string	"%d %s %s"
.LC8:
	.string	"Contact Saved as %s - %s\n"
	.text
	.globl	add_contact
	.type	add_contact, @function
add_contact:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movl	%esi, -60(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -48(%rbp)
	cmpq	$0, -48(%rbp)
	jne	.L8
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	jmp	.L7
.L8:
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rax
	movq	-56(%rbp), %rdx
	leaq	4(%rdx), %rcx
	movq	%rax, %rdx
	movl	$100, %esi
	movq	%rcx, %rdi
	call	fgets@PLT
	movq	-56(%rbp), %rax
	addq	$4, %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -40(%rbp)
	cmpq	$0, -40(%rbp)
	je	.L10
	movq	-40(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-56(%rbp), %rax
	movzbl	4(%rax,%rdx), %eax
	cmpb	$10, %al
	jne	.L10
	movq	-40(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-56(%rbp), %rax
	movb	$0, 4(%rax,%rdx)
.L10:
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rax
	movq	-56(%rbp), %rdx
	leaq	104(%rdx), %rcx
	movq	%rax, %rdx
	movl	$12, %esi
	movq	%rcx, %rdi
	call	fgets@PLT
	leaq	-18(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -32(%rbp)
	cmpq	$0, -32(%rbp)
	je	.L11
	movq	-32(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-56(%rbp), %rax
	movzbl	104(%rax,%rdx), %eax
	cmpb	$10, %al
	jne	.L11
	movq	-32(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-56(%rbp), %rax
	movb	$0, 104(%rax,%rdx)
.L11:
	movq	-56(%rbp), %rax
	leaq	104(%rax), %rsi
	movq	-56(%rbp), %rax
	leaq	4(%rax), %rcx
	movl	-60(%rbp), %edx
	movq	-48(%rbp), %rax
	movq	%rsi, %r8
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	movq	-56(%rbp), %rax
	leaq	104(%rax), %rdx
	movq	-56(%rbp), %rax
	addq	$4, %rax
	movq	%rax, %rsi
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L7:
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L12
	call	__stack_chk_fail@PLT
.L12:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	add_contact, .-add_contact
	.section	.rodata
.LC9:
	.string	"No Contacts to show!"
.LC10:
	.string	"\nAll Contacts"
.LC11:
	.string	"%d. %s - %s\n"
	.text
	.globl	show_all_contacts
	.type	show_all_contacts, @function
show_all_contacts:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$160, %rsp
	movl	%edi, -148(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -136(%rbp)
	cmpq	$0, -136(%rbp)
	jne	.L14
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L19
.L14:
	cmpl	$0, -148(%rbp)
	jg	.L16
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L19
.L16:
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, -140(%rbp)
	jmp	.L17
.L18:
	leaq	-128(%rbp), %rax
	leaq	104(%rax), %rsi
	leaq	-128(%rbp), %rax
	leaq	4(%rax), %rcx
	leaq	-128(%rbp), %rdx
	movq	-136(%rbp), %rax
	movq	%rsi, %r8
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_fscanf@PLT
	movl	-128(%rbp), %eax
	addl	$1, %eax
	leaq	-128(%rbp), %rdx
	leaq	104(%rdx), %rcx
	leaq	-128(%rbp), %rdx
	addq	$4, %rdx
	movl	%eax, %esi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -140(%rbp)
.L17:
	movl	-140(%rbp), %eax
	cmpl	-148(%rbp), %eax
	jl	.L18
	movq	-136(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	movl	$0, %eax
.L19:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L20
	call	__stack_chk_fail@PLT
.L20:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	show_all_contacts, .-show_all_contacts
	.section	.rodata
.LC12:
	.string	"No contacts to search!"
.LC13:
	.string	"\nSearch Contact by name!"
.LC14:
	.string	"Contact Not Found!"
	.text
	.globl	search_by_name
	.type	search_by_name, @function
search_by_name:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$288, %rsp
	movl	%edi, -276(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -256(%rbp)
	cmpq	$0, -256(%rbp)
	jne	.L22
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L29
.L22:
	cmpl	$0, -276(%rbp)
	jg	.L24
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L29
.L24:
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rdx
	leaq	-112(%rbp), %rax
	movl	$100, %esi
	movq	%rax, %rdi
	call	fgets@PLT
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -248(%rbp)
	cmpq	$0, -248(%rbp)
	je	.L25
	movq	-248(%rbp), %rax
	subq	$1, %rax
	movzbl	-112(%rbp,%rax), %eax
	cmpb	$10, %al
	jne	.L25
	movq	-248(%rbp), %rax
	subq	$1, %rax
	movb	$0, -112(%rbp,%rax)
.L25:
	movl	$0, -260(%rbp)
	jmp	.L26
.L28:
	leaq	-240(%rbp), %rax
	leaq	104(%rax), %rsi
	leaq	-240(%rbp), %rax
	leaq	4(%rax), %rcx
	leaq	-240(%rbp), %rdx
	movq	-256(%rbp), %rax
	movq	%rsi, %r8
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_fscanf@PLT
	leaq	-112(%rbp), %rax
	leaq	-240(%rbp), %rdx
	addq	$4, %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L27
	movl	-240(%rbp), %eax
	addl	$1, %eax
	leaq	-240(%rbp), %rdx
	leaq	104(%rdx), %rcx
	leaq	-240(%rbp), %rdx
	addq	$4, %rdx
	movl	%eax, %esi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	jmp	.L29
.L27:
	addl	$1, -260(%rbp)
.L26:
	movl	-260(%rbp), %eax
	cmpl	-276(%rbp), %eax
	jl	.L28
	movq	-256(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
.L29:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L30
	call	__stack_chk_fail@PLT
.L30:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	search_by_name, .-search_by_name
	.section	.rodata
.LC15:
	.string	"%d\n"
.LC16:
	.string	"\nDelete Contact"
.LC17:
	.string	"w"
.LC18:
	.string	"%d %s %s\n"
	.text
	.globl	delete_contact
	.type	delete_contact, @function
delete_contact:
.LFB4:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	-16384(%rsp), %r11
.LPSRL0:
	subq	$4096, %rsp
	orq	$0, (%rsp)
	cmpq	%r11, %rsp
	jne	.LPSRL0
	subq	$1184, %rsp
	movl	%edi, -17556(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -17544(%rbp)
	cmpq	$0, -17544(%rbp)
	jne	.L32
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L43
.L32:
	movl	-17556(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	cmpl	$0, -17556(%rbp)
	jg	.L34
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L43
.L34:
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	stdin(%rip), %rdx
	leaq	-112(%rbp), %rax
	movl	$100, %esi
	movq	%rax, %rdi
	call	fgets@PLT
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	movq	%rax, -17536(%rbp)
	cmpq	$0, -17536(%rbp)
	je	.L35
	movq	-17536(%rbp), %rax
	subq	$1, %rax
	movzbl	-112(%rbp,%rax), %eax
	cmpb	$10, %al
	jne	.L35
	movq	-17536(%rbp), %rax
	subq	$1, %rax
	movb	$0, -112(%rbp,%rax)
.L35:
	movl	$0, -17552(%rbp)
	jmp	.L36
.L37:
	leaq	-17520(%rbp), %rax
	movl	-17552(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$116, %rdx, %rdx
	addq	$96, %rdx
	addq	%rdx, %rax
	leaq	8(%rax), %rsi
	leaq	-17520(%rbp), %rdx
	movl	-17552(%rbp), %eax
	cltq
	imulq	$116, %rax, %rax
	addq	%rdx, %rax
	leaq	4(%rax), %rcx
	leaq	-17520(%rbp), %rdx
	movl	-17552(%rbp), %eax
	cltq
	imulq	$116, %rax, %rax
	addq	%rax, %rdx
	movq	-17544(%rbp), %rax
	movq	%rsi, %r8
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_fscanf@PLT
	addl	$1, -17552(%rbp)
.L36:
	movl	-17552(%rbp), %eax
	cmpl	-17556(%rbp), %eax
	jl	.L37
	movq	-17544(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	leaq	.LC17(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -17528(%rbp)
	cmpq	$0, -17528(%rbp)
	jne	.L38
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L43
.L38:
	movl	$0, -17548(%rbp)
	jmp	.L39
.L42:
	leaq	-17520(%rbp), %rdx
	movl	-17548(%rbp), %eax
	cltq
	imulq	$116, %rax, %rax
	addq	%rdx, %rax
	leaq	4(%rax), %rdx
	leaq	-112(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L45
	leaq	-17520(%rbp), %rax
	movl	-17548(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$116, %rdx, %rdx
	addq	$96, %rdx
	addq	%rdx, %rax
	leaq	8(%rax), %rsi
	leaq	-17520(%rbp), %rdx
	movl	-17548(%rbp), %eax
	cltq
	imulq	$116, %rax, %rax
	addq	%rdx, %rax
	leaq	4(%rax), %rcx
	movl	-17548(%rbp), %eax
	cltq
	imulq	$116, %rax, %rax
	addq	%rbp, %rax
	subq	$17520, %rax
	movl	(%rax), %edx
	movq	-17528(%rbp), %rax
	movq	%rsi, %r8
	leaq	.LC18(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	jmp	.L41
.L45:
	nop
.L41:
	addl	$1, -17548(%rbp)
.L39:
	movl	-17548(%rbp), %eax
	cmpl	-17556(%rbp), %eax
	jl	.L42
	movq	-17528(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	movl	$0, %eax
.L43:
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L44
	call	__stack_chk_fail@PLT
.L44:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	delete_contact, .-delete_contact
	.section	.rodata
.LC19:
	.string	"\nCLI Phone Book - v2"
.LC20:
	.string	"Choose an option to continue!"
.LC21:
	.string	"1 - Create New Contact"
.LC22:
	.string	"2 - Show all contacts"
.LC23:
	.string	"3 - Search by Name"
.LC24:
	.string	"4 - Delete Contact"
.LC25:
	.string	"5 - Exit"
.LC26:
	.string	"Choice: "
.LC27:
	.string	"%d"
.LC28:
	.string	"Bye!"
.LC29:
	.string	"Invalid Choice"
	.text
	.globl	main
	.type	main, @function
main:
.LFB5:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	leaq	-16384(%rsp), %r11
.LPSRL1:
	subq	$4096, %rsp
	orq	$0, (%rsp)
	cmpq	%r11, %rsp
	jne	.LPSRL1
	subq	$1048, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
.L58:
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC24(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC25(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC26(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-17428(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	jmp	.L47
.L48:
	nop
.L47:
	call	getchar@PLT
	cmpl	$10, %eax
	jne	.L48
	movl	-17428(%rbp), %eax
	cmpl	$5, %eax
	ja	.L49
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L51(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L51(%rip), %rdx
	addq	%rdx, %rax
	notrack jmp	*%rax
	.section	.rodata
	.align 4
	.align 4
.L51:
	.long	.L49-.L51
	.long	.L55-.L51
	.long	.L54-.L51
	.long	.L53-.L51
	.long	.L52-.L51
	.long	.L50-.L51
	.text
.L55:
	call	get_length
	movl	%eax, %ebx
	call	get_length
	leaq	-17424(%rbp), %rdx
	cltq
	imulq	$116, %rax, %rax
	addq	%rdx, %rax
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	add_contact
	jmp	.L56
.L54:
	call	get_length
	movl	%eax, %edi
	call	show_all_contacts
	jmp	.L56
.L53:
	call	get_length
	movl	%eax, %edi
	call	search_by_name
	jmp	.L56
.L52:
	call	get_length
	movl	%eax, %edi
	call	delete_contact
	jmp	.L56
.L50:
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
	jmp	.L59
.L49:
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, %eax
	jmp	.L59
.L56:
	jmp	.L58
.L59:
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L60
	call	__stack_chk_fail@PLT
.L60:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
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
