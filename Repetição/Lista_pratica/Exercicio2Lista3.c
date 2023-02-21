/*2) Considerando que para um consórcio sabe-se o número total de prestações, a quantidade
de prestações pagas e o valor de cada prestação (que é fixo). Escreva um algoritmo que
determine o valor total já pago pelo consorciado e o saldo devedor.*/

#include <stdio.h>
int main (void)
{
    int prestotal, prespagas;
    float valorprest, valorpago, saldodevedor;

    printf("informe a quantidade total de prestacoes: ");
    scanf("%d", &prestotal);

    printf("Informe o numero de prestacoes pagas: ");
    scanf("%d", &prespagas);

    printf("Informe o valor da cada prestacao: ");
    scanf("%f", &valorprest);

    valorpago = prespagas * valorprest;
    saldodevedor = (prestotal - prespagas) * valorprest;

    printf("\nO valor ja pago foi de:R$ %.2f\n", valorpago);
    printf("\nO saldo devedor é de:R$ %.2f\n", saldodevedor);
}
