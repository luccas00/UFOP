### procedimentos aninhados
.data
  newLine: .asciiz "\n"
.text
  addi $s0, $zero, 10
  jal increaseMyRegister
    
  ### print a new line
  addi $v0, $zero, 4
  la $a0, newLine
  syscall
  
  jal printTheValue
    
  ### finaliza o programa    
  addi $v0, $zero, 10
  syscall
  
  increaseMyRegister:
    addi $sp, $sp, -8  ### stack pointer, libera 8 bytes na pilha.
    sw $s0, 0( $sp)   ### memoria[ sp + 0 ] = s0
    sw $ra, 4($sp)    #### antes de chamar outra função tem que salvar o valor de $ra
    addi $s0, $s0, 30  ## s0 += 30

    jal printTheValue #funcoes aninhadas, funcao dentro de outra funcao
    
    lw $s0, 0($sp) ## s0 = memoria[ sp +0 ]
    lw $ra, 4($sp) ## valor original de $ra
    addi $sp, $sp, 8 ## restaura o ponteiro para o topo da pilha
    jr $ra
    
 printTheValue:
    ### imprimi novo valor funcao
    addi $v0, $0, 1
    add $a0, $zero, $s0  #imprime 40
    syscall
    jr $ra
      
      
      
    
    
