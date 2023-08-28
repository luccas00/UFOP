#define MAX 100

typedef struct pilha_est{

    int valor[MAX];
    int topo;

}pilha;

void inicializaPilha(pilha *pilhaQualquer);

int isEqual(pilha *pilha1, pilha *pilha2);
