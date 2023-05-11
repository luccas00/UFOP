.data
  number1: .word 20 # word = 32 bits ou 4 bytes
  number2: .word  8

.text
  la $t0, number1
  lw $s0, 0($t0)
  
  lw $s1, number2
  
  sub $t0, $s0, $s1
  
  addi $v0, $zero, 1 
  add  $a0, $zero, $t0
  #add $a0, $t0, $0
 
  syscall
