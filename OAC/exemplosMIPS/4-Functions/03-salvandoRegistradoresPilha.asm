# salvando registradores pilha
.data
  newLine: .asciiz "\n"
.text
  addi $s0, $zero, 10  # $s0 = 10
  jal increaseMyRegister
  
  addi $v0, $zero, 4
  la $a0, newLine
  syscall
    
  # imprimi o valor
  addi $v0, $zero, 1
  add  $a0, $zero, $s0
  syscall     # $imprime 10
    
  # finaliza o programa    
  addi $v0, $zero, 10
  syscall
  
  increaseMyRegister:
    addi $sp, $sp, -4  # stack pointer, libera 4 bytes na pilha.
    sw $s0, 0( $sp )   # memoria[ $sp + 0 ] = $s0
    addi $s0, $s0, 30  # s0 += 30
    
    # imprimi novo valor funcao
    addi $v0, $zero, 1
    add $a0, $zero, $s0
    syscall   # imprime 40
    
    lw $s0, 0($sp)     # $s0 = memoria[ $sp +0 ]
    addi $sp, $sp, 4   # restaura o ponterio para o topo da pilha
    jr $ra


