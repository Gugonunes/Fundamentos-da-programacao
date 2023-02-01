/*6) Elaborar um algoritmo que lê um valor que se refere à altura de uma pessoa e mostra
uma mensagem conforme a tabela a seguir.*/
#include<stdio.h>

int main (void)
{
    double altura;

    printf("Informe a altura: ");
    scanf("%lf", &altura);

    if( altura < 1.50)
    {
        printf("Altura abaixo de um metro e meio");
    }
    else if (altura < 1.8)//(altura >= 1.5 && altura <1.8) entre 1.5 e 1.8
    {
        printf("entre um metro e meio e um metro e oitenta centímetros");
    }
    else
    {
        printf("acima de um metro e oitenta centímetros");
    }
}
