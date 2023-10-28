typedef int chave;

typedef struct typeCelula_est
{   
    chave chave;
    char nome[26];
    int idade;
    
}typeCelula;

typedef struct treeNode_est
{
    typeCelula registro;
    struct treeNode_est *leftNode;
    struct treeNode_est *rigthNode;

}treeNode;

void insereNo (treeNode **qualquer, typeCelula aux);

treeNode * newNode (typeCelula x);

int pesquisa (treeNode *raiz_x, typeCelula *k);

void preOrderRec (treeNode *raiz_x);

void inOrderRec (treeNode *raiz_x);

void posOrderRec (treeNode *raiz_x);

void defineCelula (typeCelula *aux);

int numeroNosFolha (treeNode *raiz_x);