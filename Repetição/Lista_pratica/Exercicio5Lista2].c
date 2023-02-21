/*Escreva um algoritmo para ler o n�mero de votos brancos, nulos (incluem eleitores
ausentes) e v�lidos de uma elei��o. Calcular e mostrar o percentual que cada um
(brancos, nulos e v�lidos) representa em rela��o ao total de eleitores. Lembrar que os
valores dos percentuais podem n�o ser inteiros. */

#include <stdio.h>

int main (void)
{
    int brancos, nulos, validos, total;
    float percbrancos, percnulos, percvalidos;

    printf("Informe o numero de votos brancos: ");
    scanf("%d", &brancos);

    printf("Informe o numero de votos nulos (incluem os eleitores ausentes): ");
    scanf("%d", &nulos);

    printf("Informe o numero de votos validos: ");
    scanf("%d", &validos);

    total = brancos + nulos + validos;
    percbrancos = brancos * 100/total;
    percnulos = nulos * 100/total;
    percvalidos = validos * 100/total;

    printf("\nO percentual de votos brancos de um total de %d votos foi: %.2f%%\n", total, percbrancos);
    printf("\nO percentual de votos nulos de um total de %d votos foi: %.2f%%\n", total, percnulos);
    printf("\nO percentual de votos validos de um total de %d votos foi: %.2f%%\n", total, percvalidos);
}
