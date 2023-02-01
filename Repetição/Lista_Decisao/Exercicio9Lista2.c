/*9) Fazer o programa para o algoritmo representado no fluxograma a seguir*/
#include <stdio.h>
int main (void)
{
    float salbase, gratif, salbruto, ir, salliq;

    printf("Informe o salario base: ");
    scanf("%f", &salbase);

    printf("Informe o gratif: ");
    scanf("%f", &gratif);

    salbruto = salbase + gratif;

    if(salbruto < 1000)
    {
        ir = salbruto * 15/100;
        salliq = salbruto - ir;
        printf("O salario liquido é de: %f", salliq);
    }
    else
    {
        ir = salbruto * 20/100;
        salliq = salbruto - ir;
        printf("O salario liquido é de: %f", salliq);
    }
}
