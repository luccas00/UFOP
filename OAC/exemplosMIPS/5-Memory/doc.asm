.data
  string: .space 20 
  newLine: .asciiz "\n" 
  
.text
    addi $v0, $zero, 8
    la   $a0, string
    addi $a1, $zero, 20
    syscall
    
    addi $v0, $zero, 4
    la   $a0, string
    syscall
    addi $s1, $zero, 10
    la $t0, string
    
    laco:
    lb $s0, 0($t0)
    beq $s1, $s0, saida 
    addi, $s0, $s0, -32
    sb $s0, 0($t0)    
    addi $t0, $t0, 1
    
    j laco
    saida:
    addi $v0, $zero, 4
    la   $a0, string
    syscall
   
