	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "\12Todo App\0"
	.align 4
LC1:
	.ascii "Choose a operation to continue.\0"
LC2:
	.ascii "1. Add Todo\0"
LC3:
	.ascii "2. Show all Todos\0"
LC4:
	.ascii "3. Get Todo by ID\0"
LC5:
	.ascii "4. Mark as completed\0"
LC6:
	.ascii "5. Delete Todo\0"
LC7:
	.ascii "6. Exit\0"
LC8:
	.ascii "\12Enter Choice: \0"
LC9:
	.ascii "%d\0"
LC10:
	.ascii "\12Good Bye!\0"
LC11:
	.ascii "\12Invalid Command\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
L15:
	movl	$0, 28(%esp)
	movl	$LC0, (%esp)
	call	_puts
	movl	$LC1, (%esp)
	call	_puts
	movl	$LC2, (%esp)
	call	_puts
	movl	$LC3, (%esp)
	call	_puts
	movl	$LC4, (%esp)
	call	_puts
	movl	$LC5, (%esp)
	call	_puts
	movl	$LC6, (%esp)
	call	_puts
	movl	$LC7, (%esp)
	call	_puts
	movl	$LC8, (%esp)
	call	_puts
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC9, (%esp)
	call	_scanf
	jmp	L2
L3:
	nop
L2:
	call	_getchar
	cmpl	$10, %eax
	jne	L3
	movl	28(%esp), %eax
	cmpl	$6, %eax
	ja	L4
	movl	L6(,%eax,4), %eax
	jmp	*%eax
	.section .rdata,"dr"
	.align 4
L6:
	.long	L4
	.long	L5
	.long	L7
	.long	L8
	.long	L9
	.long	L10
	.long	L11
	.text
L5:
	call	_add_todo
	jmp	L14
L7:
	call	_show_all_todos
	jmp	L14
L8:
	call	_get_todo_by_id
	jmp	L14
L9:
	call	_todo_mark_as_complete
	jmp	L14
L10:
	call	_delete_todo
	jmp	L14
L11:
	movl	$LC10, (%esp)
	call	_puts
	movl	$0, %eax
	jmp	L16
L4:
	movl	$LC11, (%esp)
	call	_puts
L14:
	jmp	L15
L16:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_getchar;	.scl	2;	.type	32;	.endef
	.def	_add_todo;	.scl	2;	.type	32;	.endef
	.def	_show_all_todos;	.scl	2;	.type	32;	.endef
	.def	_get_todo_by_id;	.scl	2;	.type	32;	.endef
	.def	_todo_mark_as_complete;	.scl	2;	.type	32;	.endef
	.def	_delete_todo;	.scl	2;	.type	32;	.endef
