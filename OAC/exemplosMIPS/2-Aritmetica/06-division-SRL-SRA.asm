.data
    space: .byte ' '

.text
    ori $t0, $zero, -10  # $t1 = 3
    
    srl $t1, $t0, 1 # t2 = t2 / 2^1
    or  $a0, $zero, $t1
    ori $v0, $zero, 1
    syscall
  
    addi $v0, $zero, 4 #imprimir caractere
    la $a0, space
    syscall
  
    sra $t1, $t0, 1 # t2 = t2 / 2^1, considera bit de sinal
    or  $a0, $zero, $t1
    ori $v0, $zero, 1
    syscall
    
    addi $v0, $zero, 4 #imprimir caractere
    la $a0, space
    syscall
    
    mult $t0, $t1
    mflo $a0
    ori $v0, $zero, 1
    syscall
    

