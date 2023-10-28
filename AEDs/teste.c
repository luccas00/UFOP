#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10; //decimal
    //int a = 010;  // octal
    //int a = 0xB;  //hexadecimal
    //int a = 0b01; // binario

    int b;
    printf("\nHex : %X | Dec : %d | Oct : %o | Bin : %b \n", a, a, a, a );

    a = a << 1;
    printf("\nHex : %X | Dec : %d | Oct : %o | Bin : %b \n", a, a, a, a );

    b = 5 & 0b0001;
    printf("\nHex : %X | Dec : %d | Oct : %o | Bin : %b \n", b, b, b, b );

    b = 6 & 0b0010;
    printf("\nHex : %X | Dec : %d | Oct : %o | Bin : %b \n", b, b, b, b );

}