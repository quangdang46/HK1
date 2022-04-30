.data 
	list: .word 2, 0, 6, 7, 11, 30, 17, 30, 23, 4
	size : .word 10
	msg: .asciiz "So lon nhat trong mang 2, 0, 6, 7, 11, 30, 17, 30, 23, 4 la : "
	msg2: .asciiz "So nho nhat trong mang 2, 0, 6, 7, 11, 30, 17, 30, 23, 4 la : "
	enl: .asciiz "\n"
	
.text 
.globl main
main:
la $t1,list
lw $t2,size
li $t3,0
lw $t4,($t1)

Sosanhmax:
beq $t3,$t2,exit1
addi $t1,$t1,4
addi $t3,$t3,1
lw $t5,($t1)
blt $t4,$t5,max
j Sosanhmax

max:
move $t4,$t5
j Sosanhmax
	
exit1:
li $v0,4
la $a0,msg
syscall
la $v0,1
move $a0,$t4
syscall

la $t1,list
lw $t2,size
li $t3,0
lw $t4,($t1)

Sosanhmin:
beq $t3,$t2,exit2
addi $t1,$t1,4
addi $t3,$t3,1
lw $t5,($t1)
bgt $t4,$t5,min
j Sosanhmin

min:
move $t4,$t5
j Sosanhmin

exit2:
li $v0,4
la $a0,enl
syscall

li $v0,4
la $a0,msg2
syscall

la $v0,1
move $a0,$t4
syscall
li $v0,10
syscall