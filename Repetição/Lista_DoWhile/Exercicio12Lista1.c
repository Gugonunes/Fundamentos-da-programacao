/*12) Fazer o programa para o algoritmo representado no fluxograma a seguir. Que
estrutura de repetição está representada neste fluxograma?*/
#include<stdio.h>
int main(void)
{
    int i;

    do
    {
        printf("Informe um numero positivo: ");
        fflush(stdin);
        scanf("%d", &i);
    }while(i<0);
}
