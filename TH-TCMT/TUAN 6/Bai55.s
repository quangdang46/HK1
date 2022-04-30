	.text
	.globl main
main:
	li $v0,4
	la $a0, msg1
	syscall
	li $v0,5
	syscall
	move $t0,$v0
	li $t1,0
	sub $t0,$t0,$t1
	
	beq $t0, $zero, thongbao
	bgt $t0,$t1,soduong
	blt $t0,$t1,soam
soduong:
	li $v0,4
	la $a0, msg3
	syscall
	j exit
soam:
	li $v0,4
	la $a0, msg4
	syscall
	j exit
thongbao:
	li $v0,4
	la $a0, msg2
	syscall
	
exit:
	li $v0,10
	syscall
	
	# Print \n
	li $v0,4 # print_string syscall code = 4
	la $a0, newline
	syscall

	# Start .data segment (data!)
	.data
msg1: .asciiz "Nhap n: "
msg2: .asciiz "N = 0"
msg3: .asciiz "N la so duong"
msg4: .asciiz "N la so am"
newline: .asciiz "\n"