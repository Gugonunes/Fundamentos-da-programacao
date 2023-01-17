/*4) Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0 e a média desses
múltiplos.*/
#include<stdio.h>
int main (void)
{
    int i, qtd=0, media, soma=0;

    for(i=500;i>=0;i--)
    {
        if(i%4==0 || i%10==0)
        {
            printf("%d\t", i);
            qtd++;
            soma = soma+i;
            media = soma/qtd;
        }
    }
    printf("\n\n%d é media\n\n", media);

}
