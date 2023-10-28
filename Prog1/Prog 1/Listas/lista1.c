#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define Pi 3.14159
#define Mass 5.9*pow(10, 24)
#define Gravidade 6.7*pow(10, 11)

int choice;

struct ponto
{
    float x, y;
};
typedef struct ponto ponto;

void head()
{
    printf("\n* * * * * * * * * * * * * * * * * * * *");
    printf("\n* * * * * * * * Welcome * * * * * * * *");
    printf("\n* * * * * * * * * * * * * * * * * * * *\n");
}

void troca(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

float converte_celsius(float temp)
{
    float fahrenheit;
    fahrenheit=1.8*temp+32;
    return fahrenheit;
}

float converte_fahrenheit(float temp)
{
    float celsius;
    celsius=(temp-32)/1.8;
    return celsius;
}

int main () {

    int a;
    float x, y, soma, dif, prod, quo;
    float gastos, gorjeta, conta;
    float salario_atual, qtd_salarios;
    float valor, novo_valor, desconto;
    int num1, num2;
    float tc, tf;
    float montante, periodo, taxa, total, juros;
    ponto p1, p2;
    float distancia_p;
    float cateto_op, cateto_adj, hipotenusa;
    float base_ret, altura_ret, area_ret, perimetro_ret;
    float raio, comp_circulo, area_circulo, vol_esfera;
    float alt_trapezio, base_menor, base_maior, area_trapezio;
    float raio_satelite, velocidade_escalar, periodo_t;


    setlocale(LC_ALL, "pt-BR");

    head();

    printf("\nBem vindo a Lista 1 - Programação de computadores 1\n");
    printf("\nDigite o Numero correspondente a opção desejada");
    printf("\n1 - Programa para ler um número inteiro e exibir seu sucessor e seu antecessor.");
    printf("\n2 - Programa para ler dois números reais e exibir a soma, diferença, produto e quociente");
    printf("\n3 - Programa que leia o valor gasto com as despesas realizadas em um restaurante e imprima o valor da gorjeta e o valor total a ser pago");
    printf("\n4 - Programa que leia o valor do salário mínimo e o valor do salário de uma pessoa. Calcular e exibir quantos salários mínimos essa pessoa ganha");
    printf("\n5 - Programa que possa entrar com o valor de um produto e exiba o novo valor tendo em vista que o desconto foi de [9 %%]");
    printf("\n6 - Faça um programa para ler valores para as variáveis inteiras A e B. Efetuar a troca dos valores nas variaveis");
    printf("\n7 - Programa que leia uma temperatura em graus centígrados e apresente-a convertida em graus Fahrenheit");
    printf("\n8 - Programa que faça o caminho inverso. Leia um valor em graus Fahrenheit e converta para graus centígrados");
    printf("\n9 - Programa para calcular o rendimento com juros simples. O usuário deverá digitar o montante total, o período que o dinheiro renderá (em meses) e a taxa de juros mensal");
    printf("\n10 - Programa que lê dois pontos P1 = (x1, y1) e P2 = (x2, y2) e, calcule e imprima a distância entre esses dois pontos");
    printf("\n11 - Programa que dados dois lados de um triângulo retângulo, calcule a respectiva hipotenusa");
    printf("\n12 - Programa que leia as dimensões dos lados de um retângulo, calcule e imprima a área e perímetro deste retângulo.");
    printf("\n13 - Programa que leia um número R, calcule e imprima o comprimento da circunferência, a área do círculo e o volume da esfera de raio r");
    printf("\n14 - Programa que leia os valores das bases e altura de um trapézio, calcule e imprima o valor da sua área.\n");
    printf("\n15 - Considere a massa da terra igual a 5,9 x 10^24 kg e um satélite de massa M em órbita circular de raio R em torno da terra. O Programa ira ler o valor do raio, determinar e imprimir a velocidade escalar V do movimento orbital do satélite e o período T do movimento orbital.");
    printf("\n16 - Água e óleo, são colocados em um sistema de vasos comunicantes. O programa ira ler a altura h1 (cm ) da coluna de óleo, calcular e imprimir a altura h2 da coluna de água medida acima do nível de separação entre os líquidos.");
    printf("\n17 - Programa que ira ler o primeiro termo de uma Progressão Aritmética (PA), sua razão, um número N e, a seguir, calcule e imprima o N-ésimo termo da PA.");
    printf("\n18 - Algoritmo que ira ler um número N, o primeiro termo A1 e a razão Q de uma Progressão Geométrica (PG), calcule e imprima o N-ésimo termo desta PG.\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nDigite o numero inteiro desejado:\n");
        scanf("%d", &a);
        printf("\nAntecessor [%d]\nSucessor [%d]", a-1, a+1);
        break;
    
    case 2:
        printf("\nDigite os valores de X e Y, respectivamente:\n");
        scanf(" %f%f", &x, &y);
        soma=x+y;
        dif=x-y;
        prod=x*y;
        quo=x/y;
        printf("\nSoma entre ->         X[%.2f] + Y[%.2f] = [%.2f]", x, y, soma);
        printf("\nDiferença entre ->    X[%.2f] - Y[%.2f] = [%.2f]", x, y, dif);
        printf("\nProduto entre ->      X[%.2f] * Y[%.2f] = [%.2f]", x, y, prod);
        printf("\nQuociente entre ->    X[%.2f] / Y[%.2f] = [%.2f]", x, y, quo);
        break;

    case 3:
        printf("\nDigite o valor total gasto pelo cliente:\n");
        scanf(" %f", &gastos);
        gorjeta=gastos*0.1;
        conta=gorjeta+gastos;
        printf("\nTotal de gastos: R$ %.2f", gastos);
        printf("\nGorjeta: R$ %.2f", gorjeta);
        printf("\nConta Total: R$ %.2f", conta);
        break;

    case 4:
        printf("\nDigite o seu salario atual:\n"); // Salario Minimo atualmente: R$1200
        scanf(" %f", &salario_atual);
        qtd_salarios=salario_atual/1200;
        printf("\nQuantidade de salarios minimos dentro do seu salario atual: [%.2f]", qtd_salarios);
        break;

    case 5:
        printf("\nDigite o valor do produto:\n");
        scanf(" %f", &valor);
        desconto=valor*0.09;
        novo_valor=valor-desconto;
        printf("\nValor do desconto: [R$ %.2f]", desconto);
        printf("\nNovo valor apos desconto de 9%%: [R$ %.2f]", novo_valor);
        break;
    
    case 6:
        printf("\nDigite o valor de A e B, respectivamente:\n");
        scanf(" %d%d", &num1, &num2);
        printf("\nValores de:\nA[%d]\nB[%d]", num1, num2);
        troca(&num1, &num2);
        printf("\nValores de:\nA[%d]\nB[%d]", num1, num2);
        break;

    case 7:
        printf("\nDigite a temperatura em graus Celsius:\n");
        scanf(" %f", &tc);
        tf=converte_celsius(tc);
        printf("\nTemperatura em Graus Fahrenheit: [%.2f]", tf);
        break;
    
    case 8:
        printf("\nDigite a temperatura em graus Fahrenheit:\n");
        scanf(" %f", &tf);
        tc=converte_fahrenheit(tf);
        printf("\nTemperatura em Graus Celsius: [%.2f]", tc);
        break;
    
    case 9:
        printf("\nDigite o valor do montante inicial:\n");
        scanf(" %f", &montante);
        printf("\nDigite por quanto tempo, em meses, o montante ficara aplicado:\n");
        scanf(" %f", &periodo);
        printf("\nDigite a taxa de juros em porcentagem\nEx: 10%% [10]\n0,5%% [0.5]\n");
        scanf(" %f", &taxa);
        juros=montante*(taxa/100)*periodo;
        total=montante+juros;
        printf("\nValor aplicado: [R$ %.2f]", montante);
        printf("\nTotal de Juros: [R$ %.2f]", juros);
        printf("\nMontante Final: [R$ %.2f]", total);
        break;

    case 10:
        printf("\nDigite as cordenadas X e Y, respectivamente do ponto P1:\n");
        scanf(" %f%f", &p1.x, &p1.y);
        printf("\nDigite as cordenadas X e Y, respectivamente do ponto P2:\n");
        scanf(" %f%f", &p2.x, &p2.y);
        distancia_p=sqrt(pow((p2.x-p1.x), 2)+pow((p2.y-p1.y), 2));
        printf("\nDistancia entre os dois pontos: [%.2f]\nP1[%.2f, %.2f]\nP2[%.2f, %.2f]", distancia_p, p1.x, p1.y, p2.x, p2.y);
        break;

    case 11:
        printf("\nDigite os dois menores lados do triangulo retangulo, para calculo da hipotenusa:\n");
        scanf(" %f%f", &cateto_op, &cateto_adj);
        hipotenusa=sqrt(pow(cateto_adj, 2)+pow(cateto_op, 2));
        printf("\nHipotenusa do triangulo: [%.2f]", hipotenusa);
        break;

    case 12:
        printf("\nDigite o valor da Base do retangurlo:\n");
        scanf(" %f", &base_ret);
        printf("\nDigite o valor da Altura do retangulo:\n");
        scanf(" %f", &altura_ret);
        area_ret=base_ret*altura_ret;
        perimetro_ret=(base_ret+altura_ret)*2;
        printf("\nArea do Retangulo: [%.2f]", area_ret);
        printf("\nPerimetro do Retangulo: [%.2f]", perimetro_ret);
        break;
    
    case 13:
        printf("\nDigite o valor do Raio desejado:\n");
        scanf(" %f", &raio);
        comp_circulo=2*Pi*raio;
        area_circulo=Pi*pow(raio, 2);
        vol_esfera=(pow(raio, 3)*Pi*4)/3;
        printf("\nComprimento da Circunferencia: [%.2f]", comp_circulo);
        printf("\nArea da Circunferencia: [%.2f]", area_circulo);
        printf("\nVolume da Esfera: [%.2f]", vol_esfera);
        break;

    case 14:
        printf("\nDigite o valor da altura do trapezio:\n");
        scanf(" %f", &alt_trapezio);
        printf("\nDigite o valor da Base Menor:\n");
        scanf(" %f", &base_menor);
        printf("\nDigite o valor da Base Maior:\n");
        scanf(" %f", &base_maior);
        area_trapezio=((base_maior+base_menor)*alt_trapezio)/2;
        printf("\nArea do Trapezio: [%.2f]", area_trapezio);
        break;

    case 15:
        printf("\nDigite o valor do Raio entre o Satelite e o Planeta Terra:\n");
        scanf(" %f", &raio_satelite);
        

    default:
        printf("\n\nOPÇÃO INVALIDA\n\n");
        break;
    }






    printf("\n\n");
    return 0;

}
