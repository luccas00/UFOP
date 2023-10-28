#define INICIO 0
#define MAXTAM 100

typedef int typeKey;
typedef int typeApontador;

typedef struct typeItem
{
    typeKey chave;
    char nome[26];
    int idade;

}Item;

typedef struct typeLista
{
    Item item[MAXTAM];
    typeApontador primeiro, ultimo;

}Lista;

void FazListaVazia (Lista *lista_k);

int ListaVazia (Lista *lista_k);

void ImprimeLista (Lista *lista_k);

int ListaInsere (Lista *lista_k, Item x);

void itens_Padrao (Lista *lista_k);

int conferencia_lista (Lista *lista_k);

int conferencia_vetor (Item *vetorial, int tam);

void vetor_padrao(Item *vetorial, int *tam);

void imprime_vetor(Item *vetorial, int tam);