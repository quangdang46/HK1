	.text
	.globl main
main:
	# Nhap n
	li $v0,4
	la $a0, msg1
	syscall
	li $v0,5
	syscall
	move $t0,$v0
	
	li $t1,1
	li $t2,0
sumloop:
	bgt $t1,$t0,exit
	add $t2,$t2,$t1
	add $t1,$t1,1
	j sumloop
	
exit:
	li $v0,4
	la $a0, msg2
	syscall
	li $v0,1
	move $a0,$t2
	syscall
	li $v0,10
	syscall
	
	# Print sumloop
	
	# Print \n
	li $v0,4 # print_string syscall code = 4
	la $a0, newline
	syscall

	# Start .data segment (data!)
	.data
msg1: .asciiz "Nhap n = "
msg2: .asciiz "Tong tu 1 den N = "
newline: .asciiz "\n"