typedef int typeKey;

typedef struct typeCelula_est
{
    typeKey chave;
    int idade;

}typeCelula;

typedef struct treeNode_est
{
    typeCelula registro;
    struct treeNode_est *esquerda;
    struct treeNode_est *direita;

}treeNode;

void insereNo (treeNode **qualquer, typeCelula aux);

treeNode * newNode (typeCelula x);

void defineCelula (typeCelula *aux);

void preOrderRec (treeNode *raiz_x);

int altura(treeNode *raiz);

int qtdTreeNode(treeNode *raiz);

int isBalanceada(treeNode *raiz);

int isPerfeitamenteBalanceada(treeNode *raiz);

int estaCompleta(treeNode *raiz);

int numeroNosFolha (treeNode *raiz);

