
typedef struct endereco_est
{
    char rua[200];
    char cidade[50];
    int numero;
}endereco;

typedef struct imovel_est
{
    char proprietario[100];
    float area;
    float valor;
    endereco qualquer;

}imovel;

void imprime(imovel qualquer, int aux);

float mais_barato(imovel qualquer[], int aux);

void define(imovel *qualquer, int aux);
