
.data
  message: .asciiz "Olá, "
  userInput: .space 20
.text
  main:
    ## lendo entrada do usuario
    addi $v0, $zero, 8
    la   $a0, userInput
    addi $a1, $zero, 20
    syscall
    ## mostra ola
    addi $v0, $zero, 4
    la $a0, message
    syscall
    ### mostra o nome
    addi $v0, $zero, 4
    la $a0, userInput
    syscall
    
  ## tell the system this is the end of main
  li $v0, 10
  syscall
  

