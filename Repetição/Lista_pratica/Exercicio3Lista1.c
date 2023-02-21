/*3) Escreva um algoritmo que leia o valor de uma prestação e da taxa de juros cobrada
pelo atraso da prestação. A taxa é informada em percentual. Calcule o valor a ser pago
por meio da fórmula: Valor com juros = Prestação + (Prestação * Taxa /100).*/

#include <stdio.h> //biblioteca

int main (void)
{
    //declarar variaveis

    double valorPrestacao; //double é um float com a parte inteira maior e precisão decimal maior (10 casas)
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
    printf("Valor Final da pertacao é de R$ %.2lf\n", valorFinal);
}
