typedef int typeKey;

typedef struct typeCelula_est
{
    typeKey chave;
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

void defineCelula (typeCelula *aux);

void inOrderRec (treeNode *raiz_x);

int valor_minimo (treeNode *raiz_k);

int valor_maximo (treeNode *raiz_k);