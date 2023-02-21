/*2) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e a percentagem dos impostos (ambas aplicadas sobre o
custo de fábrica). Escrever um algoritmo para, a partir do custo de fábrica do carro,
calcular e mostrar o custo ao consumidor.*/

#include <stdio.h>

int main(void)
{
    float precofabrica, distribuidor, imposto;
    float custodistri, custoimp, custofinal;

    printf("Informe o preço de fabrica do carro: ");
    scanf("%f", &precofabrica);

    printf("Informe o percentual do distribuidor (5 para 5%%): ");
    scanf("%f", &distribuidor);

    printf("Informe o percentual de imposto (5 para 5%%): ");
    scanf("%f", &imposto);

    custodistri = (precofabrica * distribuidor/100);
    custoimp = (precofabrica * imposto/100);
    custofinal = precofabrica + custodistri + custoimp;

    printf("O valor de distribuição é: %.2f\n", custodistri);
    printf("O valor de imposto é: %.2f\n", custoimp);
    printf("\n O valor final do veiculo é: %.2f", custofinal);
}
