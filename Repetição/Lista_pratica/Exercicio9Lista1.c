/*9) Ler dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma
que a variável A passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo
das variáveis antes e depois da troca.*/

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
