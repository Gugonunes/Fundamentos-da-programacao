/*5) Apresentar os n�meros �mpares entre 100 e 50, ou seja, em ordem decrescente.*/
#include<stdio.h>
int main(void)
{
    int i;

    for(i=99; i>=50; i=i-2)
    {
        printf("%d\t",i);
    }
}
