// definição do tipo
typedef struct ContaBancariaEst {
    int numero_conta, agencia;
    float saldo, saldo_investimento;
} ContaBancaria;

// cabeçalho das funções e procedimentos
void inicializa (ContaBancaria *conta, int numero_conta, int agencia, double saldo);

void deposito(ContaBancaria *conta, double saldo);

void investe (ContaBancaria *conta, double valor);

void saque(ContaBancaria *conta, double saldo);

void imprime(ContaBancaria conta);

ContaBancaria encontra(int conta, int agencia);

