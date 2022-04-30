.data

vector: .word   10, 20, 3, 20, 20, 50, 560, 100, 1005, 10
J:      .word   0
I:      .word   0
cad:    .asciiz     "Introduce el indice del primer elemento:\n"
cad2:   .asciiz     "Introduce el indice del segundo elemento:\n"


    .text

main:

    la $a1, vector  #cargo en a1 la dirección base del vector
    la $a2, I       #cargo en a2 el índice i
    la $a3, J       #cargo en a3 el índice j
    move $a1, $zero  #inicializo i a cero
    move $a2, $zero  #inicializo j a cero

    li $v0,4        #imprimo un string
    la $a0, cad
    syscall

    li $v0, 5       #leo el primer índice
    syscall

    move $a1, $v0   #muevo el entero de v0 a a1
    li $v0,4        #imprimo un string
    la $a0, cad2
    syscall

    li $v0,5        #leo el segundo índice
    syscall

    move $a2, $v0   #muevo el entero de v0 a a2

    sll $t0, $a2,2      # $t0 = i*4
    add $t0, $t0, $a1   # $t0 contiene la dirección del vector[i]
    sll $t1, $a3, 2     # $t1 = j*4
    add $t1, $t1, $a1   # $t1 contiene la dirección del vector[j]

    lw $t2, 0($t0)      #$t2 = array [i]
    lw $t3, 0($t1)      #$t3 = array[j]
    sw $t2, 0($t1)      #array[j]=array[i]
    sw $t3, 0($t0)      #array[i]=previous values of array[j]
    syscall     

    li $v0,1
    la $a0, vector
    syscall
    li $v0, 10
    syscall