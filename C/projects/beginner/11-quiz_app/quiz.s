	.file	"app.c"
	.text
	.globl	questions
	.data
	.align 32
	.type	questions, @object
	.size	questions, 1500
questions:
	.string	"Who is the president of USA?"
	.zero	121
	.string	"How many oceans in the world?"
	.zero	120
	.string	"What is the 4th letter of the Greek alphabet?"
	.zero	104
	.string	"How many elements are in the periodic table?"
	.zero	105
	.string	"Which planet in the Milky Way is the hottest?"
	.zero	104
	.string	"Which planet has the most moons?"
	.zero	117
	.string	"Where did sushi originate?"
	.zero	123
	.string	"What is the largest mammal in the world?"
	.zero	109
	.string	"Who is the king of the gods in Greek mythology?"
	.zero	102
	.string	"Which planet is known as the \342\200\234Blue Planet\342\200\235?"
	.zero	102
	.globl	answers
	.align 32
	.type	answers, @object
	.size	answers, 6000
answers:
	.string	"Donald Trump"
	.zero	137
	.string	"Joe Biden"
	.zero	140
	.string	"Tony Stark"
	.zero	139
	.string	"Steve Rogers"
	.zero	137
	.string	"2"
	.zero	148
	.string	"4"
	.zero	148
	.string	"5"
	.zero	148
	.string	"6"
	.zero	148
	.string	"Alpha"
	.zero	144
	.string	"Gamma"
	.zero	144
	.string	"Delta"
	.zero	144
	.string	"Omega"
	.zero	144
	.string	"118"
	.zero	146
	.string	"154"
	.zero	146
	.string	"100"
	.zero	146
	.string	"60"
	.zero	147
	.string	"Earth"
	.zero	144
	.string	"Pluto"
	.zero	144
	.string	"Venus"
	.zero	144
	.string	"Mars"
	.zero	145
	.string	"Jupiter"
	.zero	142
	.string	"Saturn"
	.zero	143
	.string	"Venus"
	.zero	144
	.string	"Mercury"
	.zero	142
	.string	"USA"
	.zero	146
	.string	"Japan"
	.zero	144
	.string	"India"
	.zero	144
	.string	"UAE"
	.zero	146
	.string	"Blue whale"
	.zero	139
	.string	"Lion"
	.zero	145
	.string	"Elephant"
	.zero	141
	.string	"Dog"
	.zero	146
	.string	"Thor"
	.zero	145
	.string	"Zeus"
	.zero	145
	.string	"Odin"
	.zero	145
	.string	"Loki"
	.zero	145
	.string	"Earth"
	.zero	144
	.string	"Pluto"
	.zero	144
	.string	"Venus"
	.zero	144
	.string	"Mars"
	.zero	145
	.globl	correct_ans
	.align 32
	.type	correct_ans, @object
	.size	correct_ans, 40
correct_ans:
	.long	1
	.long	3
	.long	3
	.long	1
	.long	3
	.long	2
	.long	2
	.long	1
	.long	2
	.long	1
	.section	.rodata
.LC0:
	.string	"Simple Quiz App"
.LC1:
	.string	"\n%d. %s\n\n"
.LC2:
	.string	"%d. %s\n"
.LC3:
	.string	"\nYour Answer (1, 2, 3, 4): "
.LC4:
	.string	"%d"
.LC5:
	.string	"Invalid Answer"
.LC6:
	.string	"\nQuiz Over!"
.LC7:
	.string	"Your Results: %d/10\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -20(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, -16(%rbp)
	jmp	.L2
.L8:
	movl	-16(%rbp), %eax
	cltq
	imulq	$150, %rax, %rax
	leaq	questions(%rip), %rdx
	addq	%rax, %rdx
	movl	-16(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -12(%rbp)
	jmp	.L3
.L4:
	movl	-12(%rbp), %eax
	cltq
	imulq	$150, %rax, %rdx
	movl	-16(%rbp), %eax
	cltq
	imulq	$600, %rax, %rax
	addq	%rax, %rdx
	leaq	answers(%rip), %rax
	addq	%rax, %rdx
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -12(%rbp)
.L3:
	cmpl	$3, -12(%rbp)
	jle	.L4
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	jle	.L5
	movl	-24(%rbp), %eax
	cmpl	$4, %eax
	jg	.L5
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	correct_ans(%rip), %rax
	movl	(%rdx,%rax), %edx
	movl	-24(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L7
	addl	$1, -20(%rbp)
	jmp	.L7
.L5:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L7:
	addl	$1, -16(%rbp)
.L2:
	cmpl	$9, -16(%rbp)
	jle	.L8
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L10
	call	__stack_chk_fail@PLT
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
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
