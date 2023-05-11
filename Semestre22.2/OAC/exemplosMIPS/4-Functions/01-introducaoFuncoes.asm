### Funções
.data
  message: .asciiz "MIPS OAC I \n"
.text
  jal displayMessage  ## jump and link
  # Observar o valor de $ra
  addi $s0, $zero, 5
  ## imprimi 5 na tela
  addi $v0, $zero, 1
  add $a0, $zero, $s0
  syscall
  
  addi $v0, $zero, 10  ### avisa que o programa finalizou
  syscall
  
  displayMessage:
    addi $v0, $zero, 4
    la $a0, message
    syscall
    jr $ra  ## volta para onde a funcao foi chamada
