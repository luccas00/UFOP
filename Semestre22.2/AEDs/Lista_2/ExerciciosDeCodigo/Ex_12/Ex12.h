typedef int typeKey;

typedef struct typeItem_est
{
    typeKey codigo_produto;
    float valor;

}typeItem;

typedef struct treeNode_est
{
    typeItem registro;
    struct treeNode_est *leftNode;
    struct treeNode_est *rigthNode;

}treeNode;

void insereNo (treeNode **qualquer, typeItem aux);

treeNode * newNode (typeItem x);

void defineCelula (typeItem *aux);

void inOrderRec (treeNode *raiz_x);

int pesquisa (treeNode *raiz_x, typeItem *k);

void preco (treeNode *raiz, typeItem *k);

int retiraNo (treeNode **qualquer, typeItem x);

void sucessor (treeNode **qualquer, treeNode *auxiliar);

int valor_minimo (treeNode *qualquer);

int valor_maximo (treeNode *qualquer);