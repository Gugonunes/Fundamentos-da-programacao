/*2) Escreva um algoritmo que leia um n?mero e verifique se ele ? maior, menor ou igual a
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
