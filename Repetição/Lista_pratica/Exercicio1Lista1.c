/* 1) Escreva um algoritmo que leia o comprimento, a largura e a altura de uma caixa retangular e calcule o seu volume, cuja
fórmula é: Volume = Comprimento * Largura * Altura.*/

#include <stdio.h> //biblioteca

int main (void) //função principal
{
    //declarar variáveis
    float altura;
    float largura;
    float comprimento;
    float volume;

    //entrada
    printf("Informe o valor da altura: "); //mostra na tela
    scanf("%f", &altura); //vai ler dado do teclado e guarda onde escolhemos
    printf("Informe o valor da largura: ");
    scanf("%f", &largura);
    printf("Informe o valor do comprimento: ");
    scanf("%f", &comprimento);

    //processamento
    volume = altura * largura * comprimento;

    //saida
    printf("Volume calculado: %f\n\n", volume); //%.2f mostra apenas 2 casas após o ponto. \n quebra linha

    }

