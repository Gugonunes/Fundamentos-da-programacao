/*Escreva um algoritmo que converta um valor temperatura de Fahrenheit para
graus Celsius, cuja fórmula de conversão é: (graus Fahrenheit - 32) * (5/9).*/

#include <stdio.h>

int main (void)
{
    float fahr, celsius;

    printf("Informe o valor da temperatura em Fahrenheit: ");
    scanf("%f", &fahr);

    celsius = ((fahr - 32) * (5/9.0));

    printf("%.2f Fahrenheit correspondem a %.2f graus Celsius\n", fahr, celsius);
}
