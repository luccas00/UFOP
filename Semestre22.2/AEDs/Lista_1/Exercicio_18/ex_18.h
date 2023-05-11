#define MAX_TAM 100

typedef struct pilha_est{

    char valor[MAX_TAM];
    int topo;

}pilha;

void inicializaPilha(pilha *pilhaQualquer);

void empilha(pilha *pilhaQualquer, char valor);

char desempilha(pilha *pilhaQualquer);
