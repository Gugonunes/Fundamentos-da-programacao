/*Um viajante de carro far� o trajeto entre duas cidades e ao t�rmino deseja saber:
_ Quantas vezes foi necess�rio abastecer;
_ Quantos litros foram consumidos para percorrer a dist�ncia indicada;
_ Quantos litros restaram no tanque ap�s a chegada ao destino.
Faca um programa em C que leia a dist�ncia entre as duas cidades, a capacidade do
tanque e o consumo m�dio do veiculo, calcule e mostre as informa��es solicitadas.
*/

#include <stdio.h>

int main (void)
{
    float distancia, capacidade, consumo, consumidos, resto;
    int abastecer;

    printf("Informe a distancia entre as duas cidades em km: ");
    scanf("%f", &distancia);

    printf("Informe a capacidade do tanque do veiculo em litros: ");
    scanf("%f", &capacidade);

    printf("Informe o consumo medio do veiculo (ex: 10 para 10km/l): ");
    scanf("%f", &consumo);

    consumidos = (distancia / consumo);
    abastecer = (consumidos / capacidade) + 0.999999;
    resto = (abastecer * capacidade) - consumidos;

    printf("\nForam consumidos %.2f litros \n", consumidos);
    printf("\nFoi necessario parar para abastecer %d vezes \n", abastecer);
    printf("\nRestaram %.2f litros \n", resto);

}
