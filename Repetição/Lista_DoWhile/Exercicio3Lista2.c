/*3) Elaborar um programa para implementar a operação de potência.*/
#include<stdio.h>
int main (void)
{
    int i=1, base, expoente, potencia=1;

    printf("Informe a base e o expoente ex(2/3 = 2^3): ");
    scanf("%d/%d", &base, &expoente);

    for(i=1; i<=expoente; i++)
    {
        potencia = potencia*base;
    }
    printf("A potencia é: %d", potencia);
}
