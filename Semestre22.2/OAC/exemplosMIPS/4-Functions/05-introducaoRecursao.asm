#     |-------------|
# max |    stack    |
#     |-------------| 
#     |      |      |
#     |      v      |
#     |             |
#     |      ^      |
#     |      |      |
#     |-------------|
#     |    heap     |
#     |-------------|
#     |    data     |
#     |-------------|
#     |    text     |
# 0   |-------------| 
#
#fatorial( n ) = 1                  se n = 0
#              = n * fatorial(n-1)  se n >= 1

.data
  promptMessage: .asciiz "Entre com um número para encontrar o fatorial"
  resultMessage: .asciiz "\n O fatorial do número é: "
  theNumber:   .word 0
  theAnswer:   .word 0
 
.text
  .globl main ## permite ser referenciado por outros arquivos
  main: 

  addi $v0, $0, 4
  la $a0, promptMessage
  syscall  # imprime a mensagem
     
  addi $v0, $0, 5
  syscall # lê do teclado
     
  la $t0, theNumber
  sw $v0, 0($t0) # salva o valor lido na memoria
     
  lw $a0, 0($t0)
  jal findFactorial
  la $t1, theAnswer
  sw $v0, 0($t1)
     
  # display the results
  addi $v0, $0, 4
  la $a0, resultMessage
  syscall
     
  addi $v0, $0, 1
  lw $a0, theAnswer
  syscall
     
  # finaliza o programa
  addi $v0, $0, 10
  syscall
     
.globl findFactorial
findFactorial:
  subu $sp, $sp, 8
  sw $ra, ($sp)  # empilha endereco retorno
  sw $s0, 4($sp) # empilha n
  # caso base
  addi $v0, $0, 1  # $v0 = 1
  beq $a0, 0, factorialDone #if n == 0, return 1
  # fatorial de n -1
  add $s0, $0, $a0
  sub $a0, $a0, 1 # n = n-1
  jal findFactorial
  # multiplicacao
  mul $v0, $s0, $v0
factorialDone:
  lw $ra, ($sp)    #desempilha $ra
  lw $s0, 4($sp)   #desempilha s0
  addu $sp, $sp, 8 #volta o topo da pilha
  jr $ra
    
     
 