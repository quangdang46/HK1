.data
	nhap: .asciiz"Nhap n: "
	xuongdong: .asciiz"\n"
	kq: .asciiz"KQ"
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
	addi $t1,$zero,10 # gan $t1=10
	blt $a1,$zero,loi
	bgt $a1,$t1,loi
	move $a0,$a1   # do hàm khai báo thực hiện trên $a0
	jal fact
	move $a0,$v0
	j xuat
loi:
	li $v0,4
	la $a0,error
	syscall 
xuat:
	li $v0,1
	syscall
	li $v0,10
	syscall
fact:
	addi $sp, $sp, -8 # Khai bao trong 2 word
	sw $ra, 4($sp) # địa chỉ trả về sau thực thi hàm
	sw $a0, 0($sp) # lưu trữ giá trị n vào bộ nhớ
	li $v0, 1      # base case của vòng lặp
	ble $a0, $zero, fact_return 
	addi $a0, $a0, -1
	jal fact
	lw $a0, 0($sp) # retrieve original n
	mul $v0, $v0, $a0 # n * fact(n - 1)
	fact_return:
	lw $ra 4($sp) # restore $ra
	addi $sp, $sp, 8 # restore $sp
	jr $ra # back to caller
	

	