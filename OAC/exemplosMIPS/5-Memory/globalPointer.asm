

.text
add $s0, $zero, $gp
addi $t0, $zero, 33

sw $t0, 0($s0)
sw $t0, 4($s0)

add $t1, $gp, -8
sw $t0, 0($t1)