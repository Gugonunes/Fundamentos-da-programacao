/*8) Escreva um programa que leia valores at� ser informado o valor zero, que n�o deve ser
considerado nos c�lculos. Ao final mostrar a quantidade de n�meros digitados, a soma
dos valores digitados e a m�dia aritm�tica dos valores informados.*/
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
