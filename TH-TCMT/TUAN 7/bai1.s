.data 
	Str: .asciiz "Hello TDT":10
	enl: .asciiz"\n"
	array : .space 16
.text 
.globl main
main:
li $v0,4
la $a0,Str
syscall

li $v0,4
la $a0,enl
syscall
li $t0,0
la $t1,Str

Xuatchuoi:
beq $t0,9,exit

lb $a0,($t1)
la $v0,11
syscall	

la $v0,4
la $a0,enl
syscall

addi $t1,$t1,1
addi $t0,$t0,1
j Xuatchuoi
exit:	
li $v0, 10
syscall
