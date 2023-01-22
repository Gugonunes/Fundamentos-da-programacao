/*7) Fazer um programa que calcule o valor de S com n informado pelo usuário,
determinado pela série: S = (n-1 *n) / 1 + (n-2 * n-1) / 2 + (n-3 * n-2) / 3 + ... (1 * 2) / n-
1. Para n = 38:
S = (37 * 38) / 1 + (36 * 37) / 2 + (35 * 36) / 3 + ... + (1 * 2) / 37*/
#include<stdio.h>
int main(void)
{
    int i, num, aux, j;
    float soma=0;

    printf("Informe o valor de n: ");
    scanf("%d", &num);
    aux = num;

    for(i=1; i<num; i++)
    {
        soma = soma + ((float)((aux-1)*aux)/i);
        j=aux-1;
        printf("(%d*%d)/%d +", j, aux, i);
        aux--;
    }
    printf("\nSoma: %f", soma);
}
