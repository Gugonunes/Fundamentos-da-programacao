/*2) Escreva um algoritmo que leia um número e verifique se ele é maior, menor ou igual a
10. */

#include <stdio.h>

int main (void)
{
    int num;

    printf("Informe o numero: ");
    scanf("%d", &num);

    if(num > 10)
    {
        printf("%d > 10\n", num);
    }
    else if(num < 10)
    {
        printf("%d < 10\n", num);
    }
    else
    {
        printf("%d == 10\n", num);
    }
}
