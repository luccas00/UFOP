typedef struct pets_est
{
    char nome[30];
    int idade;
    char sexo;

}pets;

void imprime(pets qualquer, int aux);

void define(pets *qualquer, int aux);

float media(pets qualquer[], int tam);


