#https://www.youtube.com/watch?v=Wh37So1xJGY&list=PLfe6IcA_dEWleHVhk522FCPc4aeeaFFMr&index=8
#heap1.asm copy an array to the heap

.data
array: .word 1,2,3,4,5
size:  .word 5
p:     .word 0

.text
main:
  addi $v0, $0, 9  # 9  allocate
  addi $a0, $0, 20 # 20 bytes
  syscall          # $v0 = endereco alocado no heap
  sw $v0, p        # save pointer 
  # loop through static array and copy to dynamic array
  la $t1, array
  lw $t2, p
  addi $t0, $0, 0
  lw $t3, size
loop: 
  bge $t0, $t3, exit
  lw $t5, 0($t1)
  sw $t5, 0($t2)
  addi $t1, $t1, 4
  addi $t2, $t2, 4
  addi $t0, $t0, 1
  j loop
# we did not deallocate the heap menory

exit: 
addi $v0, $0, 10 # finaliza o programa
syscall
