/*Escreva um algoritmo que calcule o valor da convers�o para d�lares de um valor lido
em reais. Primeiro calcule o valor de sa�da esperado e utilize esses valores para verificar
se o seu algoritmo est� correto. */

#include <stdio.h>

int main (void)
{
    float reais, dolar;

    printf("Informe o valor em reais:R$ ");
    scanf("%f", &reais);

    dolar = (reais/3.83);

    printf("O valor em dolares �:$ %.2f", dolar);
}
