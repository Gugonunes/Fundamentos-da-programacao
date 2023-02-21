/*Escreva um algoritmo que dados a quantidade de litros de combustível utilizada, os
quilômetros percorridos por um automóvel e o valor do litro de combustível, calcule o
gasto em reais por km.*/

#include <stdio.h>

int main (void)
{
    float litros, km, valorlitro, kmporlitro, reaisporkm;

    printf("Informe a quantidade de litros de combustivel: ");
    scanf("%f", &litros);

    printf("Informe a quantidade de quilimetros percorridos: ");
    scanf("%f", &km);

    printf("Informe o valor do litro de combustivel: ");
    scanf("%f", &valorlitro);

    kmporlitro = (km/litros);
    reaisporkm = valorlitro/kmporlitro;

    printf("O valor gasto em reais por km é: %.2f", reaisporkm);

}
