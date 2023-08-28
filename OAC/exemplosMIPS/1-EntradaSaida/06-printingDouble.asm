### imprimindo um double

.data
  myDouble:    .double 7.202
  zeroDouble:  .double 0.0

.text
  ldc1 $f2, myDouble    #load double co processor 1
  ldc1 $f0, zeroDouble
  
  addi  $v0, $zero, 3   # print double
  add.d $f12, $f2, $f0  # argumentos em $f12
  
  syscall
