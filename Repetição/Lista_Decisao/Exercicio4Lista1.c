/*4) Escreva um algoritmo que leia um n�mero e verifique se ele se encontra no intervalo
entre 5 e 20. Mostre uma mensagem se o n�mero est� nesse intervalo.*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num >= 5 && num <= 20)
    {
        printf("%d esta entre 5 e 20", num);
    }
    else
    {
        printf("%d nao esta entre 5 e 20", num);
    }
}
