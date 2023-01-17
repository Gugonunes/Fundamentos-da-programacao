/*5) Mostrar os valores ímpares e não divisíveis por 5 entre 200 e 0. Apresentar os valores
em ordem decrescente. Fazer a média dos valores desse intervalo que são divisíveis por 3
e por 5.*/
#include<stdio.h>
int main(void)
{
    int i, qtd=0, soma=0, media;

    for(i=200; i>=0; i--)
    {
        if(i%2!=0 && i%5==0)
        {
            printf("%d\t", i);
        }
        if(i%3==0 && i%5==0)
        {
            soma = soma + i;
            qtd++;
        }
    }
    if(qtd !=0)
    {
        media = soma/qtd;
        printf("\nmedia: %d", media);
    }
}
