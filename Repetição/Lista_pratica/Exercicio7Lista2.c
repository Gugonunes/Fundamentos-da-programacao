/*Um viajante de carro fará o trajeto entre duas cidades e ao término deseja saber:
_ Quantas vezes foi necessário abastecer;
_ Quantos litros foram consumidos para percorrer a distância indicada;
_ Quantos litros restaram no tanque após a chegada ao destino.
Faca um programa em C que leia a distância entre as duas cidades, a capacidade do
tanque e o consumo médio do veiculo, calcule e mostre as informações solicitadas.
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
