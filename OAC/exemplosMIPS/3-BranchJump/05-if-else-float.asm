.data
  message: .asciiz "Foi Verdadeiro, \n"
  message2: .asciiz "Foi Falso, \n"
  number1: .float 10.4
  number2: .float 10.4
  
.text
  main:
  lwc1 $f0, number1
  lwc1 $f2, number2
  c.eq.s $f0, $f2  ### Comparação igual, float
  
  bc1t  exit  #Desvia se a flag de CF é verdadeira - Condition Flag
  li $v0, 4
  la $a0, message2
  syscall
  
  # Finalização do programa
  li $v0, 10
  syscall
  
  exit:
    li $v0, 4
    la $a0, message
    syscall
