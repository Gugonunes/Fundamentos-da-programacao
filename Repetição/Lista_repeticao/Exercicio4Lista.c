/*4) Apresentar os n�meros divis�veis por 4 ou m�ltiplos de 10 entre 500 e 0 e a m�dia desses
m�ltiplos.*/
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
    printf("\n\n%d � media\n\n", media);

}
