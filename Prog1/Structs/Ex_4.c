#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto
{
    float x, y;
};
typedef struct ponto ponto;

struct retangulo
{
    ponto sup_esq, inf_dir;
};
typedef struct retangulo retangulo;

int main () {

    retangulo one;
    ponto p;

    float area, perimetro, diagonal, base, altura;
    
    printf("\n\nBem Vindo !!\n");
    printf("\nDigite os valores do Ponto Superior Esquerdo do seu Retangulo");
    printf("\nIsto e, os valores de X e Y do ponto\n");
    scanf(" %f%f", &one.sup_esq.x, &one.sup_esq.y);
    printf("\nAgora digite os valores do Ponto Inferior Direito do seu Retangulo\n");
    scanf(" %f%f", &one.inf_dir.x, &one.inf_dir.y);
    printf("\n[%.1f][%.1f]", one.sup_esq.x, one.sup_esq.y);
    printf("\n[%.1f][%.1f]\n", one.inf_dir.x, one.inf_dir.y);

    base=(one.inf_dir.x)-(one.sup_esq.x);
    altura=(one.sup_esq.y)-(one.inf_dir.y);
    area=base*altura;

    printf("\nValor da Base do Retangulo = [%.1f]", fabs(base));
    printf("\nValor da Altura do Retangulo = [%.1f]", fabs(altura));
    printf("\nArea do Retangulo = [%.1f]", fabs(area));

    perimetro=(fabs(base)+fabs(altura))*2;
    printf("\nPerimetro do Retangulo = [%.1f]", fabs(perimetro));
    
    diagonal=sqrt(pow(base, 2)+pow(altura, 2));
    printf("\nDiagonal do Retangulo = [%.1f]", fabs(diagonal));

    printf("\nDigite os valores de X e Y de um ponto P qualquer:\n");
    scanf(" %f%f", &p.x, &p.y);

    if (p.x)
    {
        /* code */
    }
    


    printf("\n\n");
    return 0;

}