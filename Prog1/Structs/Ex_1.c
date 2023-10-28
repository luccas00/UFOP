#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    int age;
    char name[30];
    char address[100];
};
typedef struct pessoa pessoa;

int main () {

    pessoa one;
    
    printf("\n\nBem Vindo !\n");
    printf("\nDigite sua Idade:\n");
    scanf(" %d", &one.age);
    printf("\nDigite seu nome e sobrenome, Maximo de 30 caracteres\n");
    fflush(stdin);
    fgets(one.name, 30, stdin);
    printf("\nDigite seu endereco, Maximo de 100 caracteres\n");
    fflush(stdin);
    fgets(one.address, 100, stdin);
    printf("\nIdade = [%d]\n", one.age);
    printf("\nNome [%s", one.name);
    printf("\nEndereco = [%s", one.address);

    printf("\n\n");
    return 0;

}