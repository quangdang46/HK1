.data
prompt: 
    .asciiz "Press 1 to display array, and Press 2 to display it in ascending order"

array:  .word 0x00, 0x33, 0x44, 0x88, 0x56, 0x45, 0x56, 0x41, 0x00, 0x33, 0x44, 0x88, 0x56, 0x45, 0x56, 0x41, 0x00, 0x33, 0x44, 0x88, 0x56, 0x25, 0x58, 0x51, 0x03, 0x33, 0x24, 0x83, 0x52, 0x72, 0x16, 0x73, 0x85, 0x45, 0x47, 0x86, 0x36, 0x43, 0x52, 0x41, 0x74, 0x32, 0x04, 0x28, 0x26, 0x23, 0x46, 0x46, 0x06, 0x33, 0x34, 0x23, 0x21, 0x53, 0x15, 0x47, 0x77, 0x38, 0x41, 0x89, 0x58, 0x42, 0x51, 0x40, 0x86, 0x53, 0x40, 0x58, 0x36, 0x67, 0x53, 0x71, 0x03, 0x33, 0x74, 0x01, 0x89, 0x45, 0x12, 0x86, 0x60, 0x93, 0x42, 0x34, 0x66, 0x41, 0x51, 0x22, 0x60, 0x73, 0x41, 0x48, 0x46, 0x55, 0x52, 0x21, 0x00, 0x33, 0x64, 0x48, 0x66, 0x95, 0x53, 0x01, 0x03, 0x03, 0x24, 0x18, 0x16, 0x42, 0x53, 0x12, 0x40, 0x27, 0x47, 0x38, 0x56, 0x33, 0x58, 0x49, 0x09, 0x33, 0x04, 0x31, 0x34, 0x02, 0x22, 0x32

arraylength: .word 0x80

space: .asciiz ", "

newline: .asciiz "\n"

.globl main

.text

main:

     la $a0, prompt 
     li $v0, 4
     syscall

     li $v0, 5
     syscall

     move $s0, $v0

    li $v0, 4      
    la $a0, newline
    syscall

    addi $s1, $zero, 1
    addi $s2, $zero, 2
    beq $s0, $s1, displayArray
    beq $s0, $s2, sort


displayArray:
li $v0, 0
    la $t1, array 
    li $v0, 4      
    la $a0, newline
    syscall

    add $t0, $zero, 0

    loop1:
    bge $t0, 128, main

    lw $t2, 0($t1)
    addi $t1, $t1, 4

    li $v0, 1      
    move $a0, $t2
    syscall

    li $v0, 4
    la $a0, space
    syscall


    addi $t0, $t0, 1
    j loop1
sort:
    li $t0, 0
    lw $t6, arraylength
loop:
    la $t1, array
    beq $t0, $t6, exitLoop 
    sub $t5, $t6, $t0
    addi $t5, $t5, -1 #in each pass, the length of the sub array would become smaller as the elements after the sub array will arrive at their correct positions (suppose array is 3, 2, 1. After 1st pass, the array will become 2, 1, 3. we exclude the last element as it is in place and then the next pass would include array 2,1 and so on)
    li $t4, 0 
    addi $t0, $t0, 1
    j pass_loop

pass_loop:
    beq $t4, $t5, loop 
    lw $t2, 0($t1)
    lw $t3, 4($t1)
    bgt $t2, $t3, swap
    j next
swap:
        sw $t2, 4($t1)
        sw $t3, 0($t1)
        j next
next:
    lw $t2, 0($t1)
    addi $t1, $t1, 4
    addi $t4, $t4, 1
    j pass_loop
exitLoop:
li $v0, 0
    la $t1, array
    li $v0, 4      
    la $a0, newline
    syscall
    add $t0, $zero, 0

loop2:
    bge $t0, 128, exit
    lw $t2, 0($t1)
    addi $t1, $t1, 4
    li $v0, 1      
    move $a0, $t2
    syscall
    li $v0, 4
    la $a0, space
    syscall
    addi $t0, $t0, 1
    j loop2
exit:
    li $v0, 10
    syscall