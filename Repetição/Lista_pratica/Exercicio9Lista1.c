/*9) Ler dois valores A e B e efetue a troca do conte�do das duas vari�veis lidas, de forma
que a vari�vel A passe a ter o valor de B e a vari�vel B o valor de A. Mostre o conte�do
das vari�veis antes e depois da troca.*/

#include <stdio.h>

int main (void)
{
    int copoA, copoB, copoVazio;

    printf("Informe o valor de A: ");
    scanf("%d", &copoA);

    printf("Informe o valor de B: ");
    scanf("%d", &copoB);

    printf("Antes da troca\n");
    printf("A: %d e B: %d\n", copoA, copoB);

    copoVazio = copoA;
    copoA = copoB;
    copoB = copoVazio;

    printf("Depois da troca\n");
    printf("A: %d e B: %d\n", copoA, copoB);

}
