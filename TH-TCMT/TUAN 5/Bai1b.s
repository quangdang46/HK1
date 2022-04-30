	 .data
msg: .asciiz "Hello\nTDT"
	 .extern foobar 4
	  
	  
	  .text
	  .globl main
main: li $v0, 4
	  la $a0, msg
	  syscall
	  lw $t1,foobar
	  
	  jr $ra