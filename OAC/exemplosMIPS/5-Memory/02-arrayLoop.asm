.data
  myArray: .space 12  #reserva o espaço da memoria
  newLine: .asciiz "\n" 
  
.text
  addi $s0, $zero, 11
  addi $s1, $zero, 22
  addi $s2, $zero, 33
  la $s3, myArray

  sw $s0, 0($s3)
  sw $s1, 4($s3)
  sw $s2, 8($s3)
  
  addi $t0, $zero, 0
  addi $t1, $s3,   0

  while:
  beq $t0, 12, exit
  lw $t6, 0( $t1 )
  addi $t0, $t0, 4
  add $t1, $s3, $t0
    
  addi $v0, $zero, 1 # imprime o numero
  add $a0, $zero, $t6
  syscall
    
  addi $v0, $zero, 4 # imprime uma linha
  la $a0, newLine
  syscall
      
  j while
  exit:
  addi $v0, $zero, 10 # finaliza o programa
  syscall
