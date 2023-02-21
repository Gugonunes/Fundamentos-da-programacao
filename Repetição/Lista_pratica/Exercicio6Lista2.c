/* Faça um programa que leia o preço de uma mercadoria com diferença de um mês (ler
o valor da mercadoria no mês passado e no mês atual) e calcule a taxa de inflação mensal
dessa mercadoria. A inflação é o percentual da diferença de preços (atual menos o
anterior) sobre o preço anterior.*/

#include <stdio.h>

int main (void)
{
    float valorpassado, valoratual, infla;

    printf("Informe o valor do produto no mes passado: ");
    scanf("%f", &valorpassado);

    printf("Informe o valor do produto no mes atual: ");
    scanf("%f", &valoratual);

    infla = (valoratual - valorpassado)*100/valorpassado;

    printf("O valor da inflação foi de: %.2f%%\n", infla);

}
