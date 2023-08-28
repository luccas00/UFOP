.data
  messageEqual: .asciiz "Os número são iguais"
  messageDiff: .asciiz "Os número são diferentes"

.text
  main:
   li $v0, 5  # código prar ler do teclado um inteiro
   syscall
   add $s0, $v0, $zero

   li $v0, 5  # código prar ler do teclado um inteiro
   syscall
   add $s1, $v0, $zero
    
   beq $s0, $s1, equal #branch not equal # beq branch equal
   li $v0, 4
   la $a0, messageDiff
   syscall
   j saida
   
   equal:
   li $v0, 4
   la $a0, messageEqual
   syscall
   
  saida:
  #finalizacao do prorama
  li $v0, 10
  syscall
 


