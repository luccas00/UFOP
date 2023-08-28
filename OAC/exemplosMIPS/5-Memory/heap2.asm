
#heap2.asm copy a string to the heap
.data
msg: .asciiz "abcdefg"
p:   .word   0   # pointer to copy of string in heap
.text
main:
  li $v0, 9 # allocate
  li $a0, 8 # 8 bytes
  syscall
  sw $v0, p  # save pointer
  # loop through string and copy to heap
  la $t1, msg
  lw $t2, p
loop:
  lbu $t5, ($t1)  #load byte
  sb  $t5, ($t2)  #store byte
  addi $t1, $t1, 1
  addi $t2, $t2, 1
  bne  $t5, $0, loop
# note: we did not deallocate the heap memory
  li $v0, 4
  lw $a0, p
  syscall
exit:
  li $v0, 10
  syscall
# visualizar heap no formato ascii