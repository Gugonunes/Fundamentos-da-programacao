/*8) Apresentar os números entre 100 e 200. Contar quantos são ímpares e não divisíveis
por 3 nesse intervalo. Fazer a média dos valores pares e divisíveis por 5 do intervalo.*/
#include<stdio.h>
int main(void)
{
    int i, qtd1=0, qtd2=0, soma=0, media;

    for(i=100; i<=200; i++)
    {
        printf("%d\t", i);

        if(i%2!=0 && i%3!=0)
        {
            qtd1++;
        }
        if(i%2==0 && i%5==0)
        {
            soma=soma+i;
            qtd2++;
        }
    }
    printf("\n%d sao impares e nao divisiveis por 3\n", qtd1);
    if(qtd2!=0)
    {
        media= soma/qtd2;
        printf("\n%d é a media dos pares e divisiveis por 5\n", media);
    }
}
