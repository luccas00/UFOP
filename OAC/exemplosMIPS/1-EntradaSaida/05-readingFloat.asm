.data
  message: .asciiz "Entre o valor de pi: "
  zeroFloat: .float 0.0  ### definir o zero em float 
.text
  lwc1 $f4, zeroFloat

  addi $v0, $zero, 4 # imprimir string
  la $a0, message
  syscall # print memoria[ $a0 ]
  
  addi $v0, $zero, 6  # 6 para ler um float
  syscall    ## $f0 = input()
  
  addi $v0, $zero, 2 # 2 para imprimir float
  add.s $f12, $f0, $f4
  syscall # print $f12
  
  
  
  
   
  
