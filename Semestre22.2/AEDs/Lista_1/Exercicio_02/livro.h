typedef struct livro_est
{
    char titulo[151];
    char autor[151];
    float preco[6];

}livro;

void define(livro vetor[], int tam);

void imprime_media(livro vetor[], int tam);

void livro_caro(livro vetor[], int tam);

void livro_barato(livro vetor[], int tam);

void imprime(livro vetor[], int tam);