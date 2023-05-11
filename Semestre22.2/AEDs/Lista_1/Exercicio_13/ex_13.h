typedef int chave;

typedef struct item_est
{
    chave chave;
    int idade;
    char nome[21];

}item;

typedef struct celula_est
{
    item item;
    struct celula_est *apontador;

}celula;

typedef struct array_est
{
    celula *primeiro;
    celula *ultimo;

}array;

void fazListaVazia (array *qualquer); /*Faz a lista ficar vazia*/

void insereCelula (array *qualquer, celula celulaBase); /*Insere uma celula na lista*/

void imprimeLista (array qualquer); /*Imprime toda a lista*/

void defineItem (item *x); /*Define um item qualquer*/

void celulasDeItensPadrao (array *qualquer);

int trocaCelula(array *qualquer, celula *base);