/*Escreva um algoritmo que calcule o valor da conversão para dólares de um valor lido
em reais. Primeiro calcule o valor de saída esperado e utilize esses valores para verificar
se o seu algoritmo está correto. */

#include <stdio.h>

int main (void)
{
    float reais, dolar;

    printf("Informe o valor em reais:R$ ");
    scanf("%f", &reais);

    dolar = (reais/3.83);

    printf("O valor em dolares é:$ %.2f", dolar);
}
