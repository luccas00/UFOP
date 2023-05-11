#http://courses.missouristate.edu/kenvollmar/mars/download.htm
# Java JRE
# java -jar Mars4_5.jar

.data
  myMessage:   .asciiz "Hello World \n"
  myCharacter: .byte   'm'

.text
  addi $v0, $zero, 4  # 4 imprimir uma string
  la $a0, myMessage   # a0 argumento de funcao
  syscall 
  
  addi $v0, $zero, 4    
  la $a0, myCharacter
  syscall
