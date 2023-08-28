.data
  number1: .word 5
  number2: .word 10

.text
  la $t0, number1
  lw $s0, 0($t0)

  la $t1, number2
  lw $s1, 0($t1)
  
  add $s2, $s0, $s1
  addi $v0, $zero, 1  # 1 - imprimindo inteiro
  add $a0, $zero, $s2  
  syscall
  
  ori $s0, $zero, 0xa # hexadecimal
  ori $s1, $zero, 010 # octal
  add $s2, $s0, $s1
  addi $v0, $zero, 1
  add $a0, $zero, $s2  
  syscall
  
  