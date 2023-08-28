.data
   msgPar:    .asciiz "PAR \n"
   msgImpar: .asciiz "IMPAR \n "
.text

addi $s1, $zero, 12   # ...1 1 1 1
andi $s2, $s1, 1   # ...0 0 0 1
beq  $s2,$zero, par

impar:
li $v0, 4
la $a0, msgImpar
syscall 
j saida

par:
li $v0, 4
la $a0, msgPar
syscall

saida:





