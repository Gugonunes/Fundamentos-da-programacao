/*7) Escreva um algoritmo que converta um valor de temperatura de graus Celsius para
graus Fahrenheit, cuja f�rmula de convers�o �: (9 * graus Celsius + 160) /5. Fa�a o teste
de mesa para 5 valores verificando se o algoritmo est� correto. Primeiro calcule ou
procure o valor de sa�da esperado. Use a seguinte tabela para o teste de mesa.*/

#include <stdio.h>

int main (void)
{
    float celsius, fahr;

    printf("Temperatura em graus celsius: ");
    scanf("%f", &celsius);

    fahr = 9 * celsius + 160;

    printf("%.2f graus celsius correspondem a %.2f Fahrenheit\n", celsius, fahr);
}
