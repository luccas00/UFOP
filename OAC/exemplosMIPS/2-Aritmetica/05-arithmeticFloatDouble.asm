.data
  n1Float: .float 3.00
  n2Float: .float 2.00
  n1Double: .double 663.121361717
  n2Double: .double 3.00
  
.text
  lwc1 $f2, n1Float
  lwc1 $f4, n2Float
  add.s $f12, $f2, $f4  ## 5
  #sub.s $f12, $f2, $f4  ## 5
  #mul.s $f12, $f2, $f4  ## multiply 
  #mul.s $f12, $f2, $f4  ## multiply 
  #div.s $f12, $f2, $f4  ## multiply 

  addi $v0, $zero, 2  ## 2 = imprimir float
  syscall

  # exemplo com Double
  ldc1 $f2, n1Double  ## double é armazenado em 2 registradores
  ldc1 $f4, n2Double
  add.d $f12, $f2, $f4  ## add double
  #sub.d $f12, $f2, $f4  ## add double
  #mul.d $f12, $f2, $f4  ## multiply doubles
  #div.d $f12, $f2, $f4  ## multiply doubles
  addi $v0, $zero, 3
  syscall
