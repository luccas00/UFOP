
.data
  #dec: .word  12  # decimal
  #dec: .word  0x12  # hexadecimal
  dec: .word  12   # octal
  aux: .word 500  #comentario
  

.text

  addi $v0, $zero, 1 # 1 =  imprimir um inteiro
  lw $a0, dec        # load word  ## a0
  lw $a1, aux
  syscall

    ### Visualizar a memoria no formato decimal
