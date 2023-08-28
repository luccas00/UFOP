### multiplicando inteiros
.data

.text
  addi $s0, $zero, 10
  addi $s1, $zero, 4
  
  mul $t0, $s0, $s1   ### armazenado em um registrador, não funciona para numero grandes
  
  addi $v0, $zero, 1   # mostrar a multiplicacao
  add  $a0, $zero, $t0
  syscall
  
  addi $t0, $zero, 20000
  addi $t1, $zero, 100
  
  mult $t0, $t1 # o produto vai para os registradores hi e lo
  mflo $s0  # move from lo
  
  ori $v0, $zero, 1   # mostra o resultado na tela
  add $a0, $zero, $s0
  syscall
  
  ori $t0, $zero, 4
  sll $s0, $t0, 3  #a0 = t0 * 2^3
  ori $v0, $zero, 1   # mostra o resultado na tela
  add $a0, $zero, $s0
  syscall # print 32
  
  
