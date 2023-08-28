typedef struct pet_est
{
    int idade;
    char nome[31];
    char sexo;

}pet;

void captura_pet(pet *qualquer);

void imprime_pet(pet qualquer);

void media_idade(pet *qualquer, int tam);

