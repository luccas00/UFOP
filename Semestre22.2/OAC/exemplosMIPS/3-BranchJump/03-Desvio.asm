.data
   message: .asciiz "Olá, como vai?\n"
   messageEnd: .asciiz "Fim do programa"
.text
  main:
  addi $s0, $zero, 14
  addi $s1, $zero, 10
  bgt $s0, $s1, displayHi    ## brach greater than
  #blt $s0, $s1, displayHi   ### branch less them
  #bgtz $s0, displayHi       ## branch great then zero
  
  ## tell the system this is the end of main
  end:
  li $v0, 4
  la $a0, messageEnd
  syscall
  li $v0, 10
  syscall
  
  displayHi:
  li $v0, 4
  la $a0, message
  syscall
  j end
