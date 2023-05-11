.data
  myArray: .space 12  #reserva o espaço da memoria de 12 bytes 
                      # 32 bits = 4 bytes
.text
  move $s0, $s1
  
  addi $s0, $zero, 11 # valores para serem gravados na memoria
  addi $s1, $zero, 22
  addi $s2, $zero, 33
  
  la $s3, myArray # carrega em $s3 o endereço de myArray
  
  add $t0, $zero, $s3
  sw $s0, 0($t0) #myArray[0] = s0  
  addi $t0, $t0, 4
  sw $s1, 0($t0)
  
  addi $t0, $t0, 4 #myArray[4] = s3
  sw $s2, 0($t0)

  add $t0, $zero, $s3
  lw $t6, 0( $t0 )
  addi $v0, $zero, 1
  addi $a0, $t6, 0
  syscall
  
  addi $t0, $t0, 4
  lw $t6, 0( $t0)
  addi $v0, $zero, 1
  addi $a0, $t6, 0
  syscall

  addi $t0, $t0, 4
  lw $t6, 0( $t0)
  addi $v0, $zero, 1
  addi $a0, $t6, 0
  syscall

