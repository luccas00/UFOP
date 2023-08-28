#include <stdio.h>
#include "ex_18.h"

void inverteTexto(pilha *pilhaQualquer){

    char c;
    int i = 0;

    inicializaPilha(pilhaQualquer);
    while((c = getchar()) != '.'){
        if(c == ' ' || c == '\n'){
            while(i > 0){
                printf("%c", desempilha(pilhaQualquer));
                i--;
            }
            printf("%c", c);
        } else {
            empilha(pilhaQualquer, c);
            i++;
        }
    }
    while(i > 0){
        printf("%c", desempilha(pilhaQualquer));
        i--;
    }
    printf(".");
}

int main()
{
    pilha pilha1;
    printf("Insert a text ending with '.':\n");
    inverteTexto(&pilha1);
    return 0;
}




