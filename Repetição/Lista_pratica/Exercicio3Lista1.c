/*3) Escreva um algoritmo que leia o valor de uma presta��o e da taxa de juros cobrada
pelo atraso da presta��o. A taxa � informada em percentual. Calcule o valor a ser pago
por meio da f�rmula: Valor com juros = Presta��o + (Presta��o * Taxa /100).*/

#include <stdio.h> //biblioteca

int main (void)
{
    //declarar variaveis

    double valorPrestacao; //double � um float com a parte inteira maior e precis�o decimal maior (10 casas)
    double taxa;
    double valorFinal;

    //entrada de dados

    printf("Valores com virgula devem ser informados com ponto no lugar da virgula \nInforme o Valor da Prestacao: ");
    scanf("%lf", &valorPrestacao);
    printf("Informe o valor da taxa (ex: 5 para 5%%): ");
    scanf("%lf", &taxa);

    // processamento
    valorFinal = valorPrestacao + (valorPrestacao * (taxa/100));

    //saida
    printf("Valor Final da pertacao � de R$ %.2lf\n", valorFinal);
}
