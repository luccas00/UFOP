.data
  prompt: .asciiz "Entre com o número: "
  message: .asciiz "Seu numero é: "
  
 .text
   addi $v0, $zero, 4  # 4 para imprimir uma string
   la $a0, prompt
   syscall
   
   addi $v0, $zero, 5  # 5 ler do teclado um inteiro
   syscall
   
   add $s0, $zero, $v0 # s0 = 0 + v0
   
   addi $v0, $zero, 4
   la $a0, message
   syscall
   
   addi $v0, $zero, 1
   add $a0, $s0, $zero
   syscall
  
 