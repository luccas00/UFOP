#define MAX 100

typedef int chaveId;

typedef struct item_est
{
    chaveId chave;
    int valor;

}item;


typedef struct pilha_est{

    item itemPilha[MAX];
    int topo;

}pilha;

void inicializaPilha(pilha *pilhaQualquer);

void empilha(pilha *pilhaQualquer, item qualquer);

item desempilha(pilha *pilhaQualquer);

void invertePilha(pilha *pilhaQualquer);

void imprimePilha(pilha *pilhaQualquer);

