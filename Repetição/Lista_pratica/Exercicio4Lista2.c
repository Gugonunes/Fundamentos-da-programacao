/*Escreva um algoritmo que dados a quantidade de litros de combust�vel utilizada, os
quil�metros percorridos por um autom�vel e o valor do litro de combust�vel, calcule o
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

    printf("O valor gasto em reais por km �: %.2f", reaisporkm);

}
