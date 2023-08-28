### dividindo inteiros
.data
   space: .byte ' '

.text
  addi $t0, $zero, 30
  addi $t1, $zero,  5

  div $s0, $t0, $t1 # verifica divisao por 0, verificar assembly básico
  
  addi $v0, $zero, 1
  add  $a0, $zero, $s0
  syscall
  
  ### outro exemplo
  addi $t0, $zero, 30
  addi $t1, $zero,  8
  
  #div $s0, $t0, 10
  div  $t0, $t1   # lo = t0 / t1
  mflo $s0 #divisao
  mfhi $s1 # resto
  
  ### imprimir
  li $v0, 1 #imprimir inteiro
  add  $a0, $zero, $s0
  syscall
  
  addi $v0, $zero, 4 #imprimir caractere
  la $a0, space
  syscall
    
  addi $v0, $zero, 1 #imprimir inteiro
  add  $a0, $zero, $s1
  syscall
  
