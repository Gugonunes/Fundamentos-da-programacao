/* Fa�a um programa que leia o pre�o de uma mercadoria com diferen�a de um m�s (ler
o valor da mercadoria no m�s passado e no m�s atual) e calcule a taxa de infla��o mensal
dessa mercadoria. A infla��o � o percentual da diferen�a de pre�os (atual menos o
anterior) sobre o pre�o anterior.*/

#include <stdio.h>

int main (void)
{
    float valorpassado, valoratual, infla;

    printf("Informe o valor do produto no mes passado: ");
    scanf("%f", &valorpassado);

    printf("Informe o valor do produto no mes atual: ");
    scanf("%f", &valoratual);

    infla = (valoratual - valorpassado)*100/valorpassado;

    printf("O valor da infla��o foi de: %.2f%%\n", infla);

}
