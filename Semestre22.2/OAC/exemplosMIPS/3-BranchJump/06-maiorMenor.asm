.data
  messageMaior: .asciiz "É maior\n"
  messageMenor: .asciiz "É menor\n"

.text
addi $v0, $zero, 5  # código prar ler do teclado um inteiro
syscall
add $s0, $v0, $zero

addi $v0, $zero, 5  # código prar ler do teclado um inteiro
syscall
add $s2, $v0, $zero

slt $s3, $s0, $s2  # if (s0 < s2) s3 =1; else s3=0 

beq, $s3, $zero, else

addi $v0, $zero, 4
la $a0, messageMenor
syscall
j saida

else:
addi $v0, $zero, 4
la $a0, messageMaior
syscall

saida:
addi $v0, $zero, 10
syscall

