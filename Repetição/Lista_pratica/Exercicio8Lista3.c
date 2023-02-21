/*8) Suponha que um caixa disponha apenas de cédulas de R$ 10, 5, 2 e 1. Escreva um
programa para ler o valor de uma conta e o valor fornecido pelo usuário para pagar essa
conta, e calcule e troco. Calcular e mostrar a quantidade de cada tipo de cédula que o caixa
deve fornecer como troco e os centavos que devem ser fornecidos. Mostrar, também o valor
da compra e do troco.*/

#include<stdio.h>

int main (void)
{
    float  conta, valorfornecido, cents, trococents;
    int troco, dez, cinco, dois, um;

    printf("Informe o valor da conta: ");
    scanf("%f", &conta);

    printf("Informe o valor fornecido: ");
    scanf("%f", &valorfornecido);

    trococents = valorfornecido - conta;
    troco = valorfornecido-conta;
    dez = troco/10;
    cinco = (troco%10)/5;
    dois = (troco%10%5)/2;
    um = (troco%10%5%2);
    cents = (trococents - troco)*100;

    printf("\nO troco deve ser de %d notas de 10", dez);
    printf("\nO troco deve ser de %d notas de 5", cinco);
    printf("\nO troco deve ser de %d notas de 2", dois);
    printf("\nO troco deve ser de %d notas de 1", um);
    printf("\nO troco em centavos deve ser de %.0f centavos", cents);
}

