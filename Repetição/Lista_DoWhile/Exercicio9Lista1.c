/*9) Imprimir os n�meros de 100 a 0 (nessa ordem) utilizando uma estrutura while.*/
#include<stdio.h>
int main(void)
{
    int i=100;

    while(i>=0)
    {
        printf("%d\t", i);
        i--;
    }
}
