typedef int TypeChave;

typedef struct TypeItem_est
{
    TypeChave chave;
    int idade;
    char nome[20];

}TypeItem;

typedef struct TypeCelula_est
{
    TypeItem item;
    struct TypeCelula_est *prox_cel; /*Apontador para o proximo item*/

}TypeCelula;

typedef struct TypeLista_est
{
    TypeCelula *primeira_cel;
    TypeCelula *ultima_cel;

}TypeLista;

void FazListaVazia (TypeLista *lista_k); /*Faz a lista ficar vazia*/

int ListaVazia (TypeLista *lista_k); /*Verifica se a lista esta vazia*/

void InsereCelula (TypeLista *lista_k, TypeItem *item_x); /*Insere uma celula na lista*/

int RetiraUltimaCelula (TypeLista *lista_k, TypeItem *item_x);

int RetiraEniCelula (TypeLista *lista_k, TypeItem *item_x, int position); /*Retira o item posicao N*/

int RetiraPrimeiraCelula (TypeLista *lista_k, TypeItem *item_x);

void ImprimeLista (TypeLista *lista_k); /*Imprime toda a lista*/

void DefineItem (TypeItem *item_x); /*Define um item qualquer*/