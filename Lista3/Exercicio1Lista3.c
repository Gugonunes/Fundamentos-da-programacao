/*1) Implementar uma fun��o para calcular o fatorial de um n�mero. Essa fun��o recebe um n�mero
por par�metro e retorna o seu fatorial. Implementar outra fun��o para apresentar os multiplicadores
no c�lculo do fatorial. Utilizando essas duas fun��es apresentar o fatorial de 1 at� um n�mero
informado pelo usu�rio. Esse valor deve estar entre um e 12. Validar a entrada. A sa�da deve ser
como apresentado na Figura a seguir. Observar que n�o h� o caractere que representa multiplica��o
ap�s o n�mero 1. */
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    char opcao;
    int num, i;


    do
    {
        system("cls");
        //
        do
        {
            printf("Informe um numero maior que 1 e menor que 12: ");
            scanf("%d", &num);
        }while(num<1 || num>12);

        for(i=1; i<=num; i++)
        {
            printf("%d! - ", i);
            mostrarfatorial(i);
            printf("->%d\n", calcularfatorial(i));
        }


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
