#define INICIO 0
#define MAXTAM 1000
#define MAXVALOR 10000

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

int ListaInsere (TypeLista *lista_k, TypeItem x); /*Insere um Item na Lista*/

void RetornaItem (TypeLista *lista_k, TypeApontador p, TypeItem *px); /*Retorna um item para a Main*/

int ListaRetira (TypeLista *lista_k, TypeApontador p, TypeItem *px); /*Retira um item da Lista*/

void ListaRetiraUltimo (TypeLista *lista_k);

void ListaCopia (TypeLista *lista_x, TypeLista *Lista_y); /*Lista X recebe Lista Y*/

void ListaConcatena (TypeLista *lista_destino, TypeLista *lista_origem); /*Concatena duas listas*/

void ImprimeLista (TypeLista *lista_k); /*Imprime a Lista*/

void ImprimeItem (TypeLista *lista_k, int indice); /*Imprime um item especifico da lista*/

void ImprimeItemGenerico (TypeItem item_qualquer); /*Imprime um item da main*/

void Define (TypeItem *item_qualquer); /*Define os elementos do item*/

void itens_Padrao (TypeLista *lista_k); /*Adiciona alguns itens padrao*/

void TrocaItem (TypeLista *lista_k, TypeApontador m, TypeApontador n); /*Troca de posiçao os elementos M e N*/

void bubbleSort (TypeLista *lista_k);

void selectionSort (TypeLista *lista_k);

void insertionSort (TypeLista *lista_k);

void shellSort (TypeLista *lista_k);

void mergeSort (TypeLista *lista_k, int inicio, int fim);

void merge (TypeLista *lista_k, int inicio, int meio, int fim);