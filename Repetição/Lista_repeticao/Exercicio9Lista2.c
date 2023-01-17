/*9) Ler dois valores que representam os limites de um intervalo. Apresentar os valores
separados por tabulação. Fazer a média dos valores que são divisíveis por 11 e por 7,
desse intervalo.*/
#include<stdio.h>
int main (void)
{
    int i, limite1, limite2, qtd=0, soma=0, media;

    printf("Informe os limites (1/5): ");
    scanf("%d/%d", &limite1, &limite2);
    if(limite1>limite2)
    {
        i = limite1;
        limite1 = limite2;
        limite2= i;
    }

    for(i=limite1; i<=limite2; i++)
    {
        if(i%11==0 && i%7==0)
        {
            printf("%d\t", i);
            qtd++;
            soma = soma + i;
        }
    }
    if(qtd!=0)
    {
        media = soma/qtd;
        printf("\nA media é: %d\n", media);
    }
}
