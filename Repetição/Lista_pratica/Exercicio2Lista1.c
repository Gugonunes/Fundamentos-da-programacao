/*2) Escreva um algoritmo que leia o raio de um círculo e calcule a sua circunferência.*/

#include <stdio.h> //biblioteca com funções ja feitas como printf e scanf

int main (void)//função principal. é a que executa
{
    //declarar variáveis
    int raio; //a variável raio vai armazenar um valor inteiro
    float circunferencia;

    //entrada de dados
    printf("Informe o valor do raio ");
    scanf("%d", &raio); //d é inteiro

    //processamento
    circunferencia = 2 * 3.14159 * raio;

    //saida
    printf("Circunferência: %.2f\n", circunferencia);

}

