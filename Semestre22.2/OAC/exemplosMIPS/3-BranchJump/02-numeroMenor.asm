.data
   message: .asciiz "O número é menor que o outro"

.text
  main:
  addi $t0, $zero, 100
  addi $t1, $zero, 200
  
  slt $s0, $t0, $t1
  bne $s0, $zero, printMessage
  
  cont:
  ## tell the system this is the end of main
  li $v0, 10
  syscall
  
  printMessage:
  li $v0, 4
  la $a0, message
  syscall
  j cont

