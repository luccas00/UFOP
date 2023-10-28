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

typedef struct treeRoot_est
{
    treeNode *raiz;

}treeRoot;


int insereNo (treeRoot *master, typeCelula aux);

treeNode * newNode (typeCelula x);

void inOrderRec (treeRoot **master);

void defineCelula (typeCelula *aux);