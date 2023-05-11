.data
  vet: .space 20
  newLine: .asciiz "\n" 
  
.text
    add  $s0, $zero, $zero
    addi $s1, $zero, 5
    la $s2, vet
    laco:
    beq $s0, $s1, saida
    addi $v0, $zero, 5
    syscall    
    sw $v0,0($s2)
    addi $s2, $s2, 4
    addi $s0, $s0, 1
    j laco
    saida:
    
    add  $s0, $zero, $zero
    addi $s1, $zero, 5
    la $s2, vet
    laco1:
    beq $s0, $s1, saida1
    lw $s3,0($s2)
    addi $s3, $s3, 100
    sw $s3,0($s2)
    addi $s2, $s2, 4
    addi $s0, $s0, 1
    j laco1
    saida1:
    
