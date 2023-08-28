typedef struct endereco_est
{
    int numero;
    char cidade[51];
    char rua[201];

}endereco;

typedef struct imovel_est
{
    char proprietario[101];
    float area;
    float valor;
    endereco localidade;
    
}imovel;

void capturaVetorImovel (imovel *qualquer, int tam);

void imprimeVetorImovel (imovel *qualquer, int tam);

void imprimeImovel (imovel qualquer);

void vetorImovel_MaisBarato (imovel *qualquer, int tam);
