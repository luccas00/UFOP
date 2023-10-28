// definição do tipo
typedef struct ContaBancariaEst {
    int numero;
    double saldo;
} ContaBancaria;

// cabeçalho das funções e procedimentos
void inicializa (ContaBancaria*, int, double);

void deposito (ContaBancaria*, double);

void saque (ContaBancaria*, double);

void imprime (ContaBancaria);