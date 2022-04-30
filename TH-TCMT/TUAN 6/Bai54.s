	.text
	.globl main
main:
	li $v0,4
	la $a0, msg1
	syscall
	li $v0,5
	syscall
	move $t0,$v0
	li $t1,3
	div $t0,$t1
	mfhi $t2
	
	beq $t2, $zero, thongbao
dapansai:
	li $v0,4
	la $a0, msg3
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
msg2: .asciiz "N chia het cho 3"
msg3: .asciiz "N khong chia het cho 3"
newline: .asciiz "\n"