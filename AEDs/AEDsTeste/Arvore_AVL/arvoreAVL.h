typedef int typeKey;

typedef struct typeCelula_est
{
    typeKey chave;
    int idade;
    char nome[26];

}typeCelula;

typedef struct treeNode_est
{
    typeCelula registro;
    struct treeNode_est *leftNode;
    struct treeNode_est *rigthNode; 

}treeNode;

int altura (treeNode *raiz);

int fatorBalanceamento (treeNode *raiz);

void rotation_LL (treeNode **raiz);

void rotation_RR (treeNode **raiz);

void rotation_RL (treeNode **raiz);

void rotation_LR (treeNode **raiz);


