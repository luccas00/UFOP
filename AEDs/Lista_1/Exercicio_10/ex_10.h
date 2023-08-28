#define INICIO 0
#define MAXTAM 100

typedef int TypeChave;
typedef int TypeApontador;

typedef struct TypeItem_est
{
    TypeChave chave;
    int idade;
    char nome[21];

}TypeItem;

typedef struct TypeLista_est
{
    TypeItem item[MAXTAM];
    TypeApontador primeiro, ultimo;

}TypeLista;

void FazListaVazia (TypeLista *lista_k); /*Faz a Lista Ficar Vazia*/

int ListaVazia (TypeLista *lista_k); /*Verifica se a Lista esta vazia*/

int ListaInsere (TypeLista *lista_k, TypeItem x); // Insere um item na lista

void ImprimeLista (TypeLista *lista_k); /*Imprime a Lista*/

void itensPadrao (TypeLista *qualquer); // 4 itens padrao para ser inseridos na lista

void Define (TypeItem *item_qualquer); /*Define os elementos do item*/

void TrocaItem (TypeLista *lista_k, TypeApontador m, TypeApontador n); /*Troca de posiçao os elementos M e N*/