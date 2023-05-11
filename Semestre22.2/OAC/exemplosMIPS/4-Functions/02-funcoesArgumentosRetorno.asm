### retorno funções
.text
  # a0, a1, a2, a3 para passar argumentos
  addi $a1, $zero, 50
  addi $a2, $zero, 100
  jal addNumbers
  # imprimindo v1
  addi $v0, $zero, 1 # imprimir inteiro
  addi $a0, $v1, 0   # $a0 = $v1 + 0
  syscall
  addi $v0, $zero, 10 # finaliza o programa    
  syscall 
  addNumbers:
  add $v1, $a1, $a2   # $v1 valores de retorno
  jr $ra  # return
