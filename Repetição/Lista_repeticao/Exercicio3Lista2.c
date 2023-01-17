/*3) Faça um programa que mostre o resultado da seguinte soma, sendo n o valor
informado pelo usuário :
Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n*/
#include<stdio.h>
int main(void)
{
    float soma=0;
    int i,n;

    printf("Informe o valor: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        soma = soma + (1.0/i);
        if(i<n)
        {
            printf("1/%d +", i);
        }
        else
        {
            printf("1/%d ", i);
        }
    }
    printf("\= %.2f", soma);

}

