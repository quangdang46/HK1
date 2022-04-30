.data
	msg:  .asciiz "Moi ban nhap 1 so"
	mgschan:  .asciiz "So ma ban vua nhap la so chan"
	mgsle:  .asciiz "So ma ban vua nhap la so le"
	newline:  .asciiz "\n"
.text
.globl main
main:
    # Hien thi message "Moi ban nhap 1 so"
    li $v0,4
    la $a0,msg
    syscall
    
	# Xuong dong moi
    li $v0,4
    la $a0,newline
    syscall
    # Get value, move to Sto
    li $v0, 5
    syscall
    move $t0,$v0
    
	
	li $t7,1
	rem $t0,$t0,2
    blt $t0,$t7, sochan

sole:
    li $v0,4
    la $a0, mgsle
    syscall
    j exit
sochan:
    li $v0,4
    la $a0,mgschan
exit:
    li $v0, 10
    syscall