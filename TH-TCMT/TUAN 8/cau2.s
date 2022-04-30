.data
	nhap: .asciiz"Nhap n: "
	xuongdong: .asciiz"\n"
	kq: .asciiz"KQ: "
	error: .asciiz"Gia tri n khong hop le"
.text
main:
	#in chuoi "Nhap n:"
	li $v0,4
	la $a0,nhap
	syscall
	
	#nhap n
	li $v0,5
	syscall
	move $a1,$v0

	#in xuong dong
	li $v0,4
	la $a0,xuongdong
	syscall
	
	#kiem tra n
	addi $t1,$zero,100
	blt $a1,$zero,loi
	bgt $a1,$t1,loi
	move $a0,$a1   # do hàm khai báo thực hiện trên $a0
	jal fib
	move $t2,$v0
	j xuat
loi:
	li $v0,4
	la $a0,error
	syscall
	li $v0,10
	syscall
fib: 
	addi $sp, $sp, -8 # room for $ra and one temporary
	sw $ra, 4($sp) # save $ra
	move $v0, $a0 # pre-load return value as n
	blt $a0, 2, fib_rt # if(n < 2) return n
	sw $a0, 0($sp) # save a copy of n
	addi $a0, $a0, -1 # n - 1
	jal fib # fib(n - 1)
	lw $a0, 0($sp) # retrieve n
	sw $v0, 0($sp) # save result of fib(n - 1)
	addi $a0, $a0, -2 # n - 2
	jal fib # fib(n - 2)
	lw $v1, 0($sp) # retrieve fib(n - 1)
	add $v0, $v0, $v1 # fib(n - 1) + fib(n - 2)
	fib_rt: lw $ra, 4($sp) # restore $ra
	addi $sp, $sp, 8 # restore $sp
	jr $ra # back to caller

xuat:
	li $v0,4
	la $a0,kq
	syscall
	li $v0,1
	move $a0,$t2
	syscall
	li $v0,10
	syscall
