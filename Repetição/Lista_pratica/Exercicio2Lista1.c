/*2) Escreva um algoritmo que leia o raio de um c�rculo e calcule a sua circunfer�ncia.*/

#include <stdio.h> //biblioteca com fun��es ja feitas como printf e scanf

int main (void)//fun��o principal. � a que executa
{
    //declarar vari�veis
    int raio; //a vari�vel raio vai armazenar um valor inteiro
    float circunferencia;

    //entrada de dados
    printf("Informe o valor do raio ");
    scanf("%d", &raio); //d � inteiro

    //processamento
    circunferencia = 2 * 3.14159 * raio;

    //saida
    printf("Circunfer�ncia: %.2f\n", circunferencia);

}

