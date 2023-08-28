
typedef struct piloto_est
{
    
    int idade;
    char nomePiloto[71];
    float salarioMensal;
    
}piloto;

typedef struct equipeFormula1_est
{

    char nomeEquipe[41];
    float faturamentoAnual;
    piloto piloto_1, piloto_2;

}equipeFormula1;

void capturaVetorEquipe(equipeFormula1 *qualquer, int tam);

void definePiloto(piloto *qualquer);

void imprimePiloto(piloto qualquer);

void imprimeVetorEquipe(equipeFormula1 *qualquer, int tam);

void lucroLiquidoVetorEquipes(equipeFormula1 *qualquer, int tam);

void imprimeMaior_e_MenorSalario(equipeFormula1 *qualquer, int tam);

