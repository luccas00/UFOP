.data
  #myArray: .word 100:3  # 3 elementos e cada um com o valor 100
  #myArray: .word 5:3  # 3 elementos e cada um com o valor 5
  myArray: .word 5:10  # 10 elementos e cada um com o valor 5
  newLine: .asciiz " " 
  
.text
  la $s3, myArray
  addi $t0, $zero, 0
  while:
    beq $t0, 40, exit
    lw $t6, 0( $s3 )
    addi $t0, $t0, 4

    addi $v0, $zero, 1 # imprime o numero
    add $a0, $zero, $t6
    syscall

    addi $v0, $zero, 4 # imprime uma linha
    la $a0, newLine
    syscall
    
    j while
  exit:
    ### finaliza o program
    addi $v0, $zero, 10
    syscall
