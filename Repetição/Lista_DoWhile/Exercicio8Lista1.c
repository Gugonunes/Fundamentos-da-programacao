/*8) Escreva um programa que leia valores até ser informado o valor zero, que não deve ser
considerado nos cálculos. Ao final mostrar a quantidade de números digitados, a soma
dos valores digitados e a média aritmética dos valores informados.*/
#include<stdio.h>
int main (void)
{
    int i, qtd=0, soma=0;
    float media;

    do
    {
        printf("Informe um numero: ");
        fflush(stdin);
        scanf("%d", &i);

        if(i!=0)
        {
            qtd++;
            soma = soma + i;

        }

    }while(i!=0);
    if(qtd!=0)
    {
        media = soma/qtd;
        printf("Media: %.2f\nSoma: %d\nQuantidade: %d", media, soma, qtd);
    }
}
