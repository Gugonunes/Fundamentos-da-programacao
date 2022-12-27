/*1) Implementar uma função para calcular o fatorial de um número. Essa função recebe um número
por parâmetro e retorna o seu fatorial. Implementar outra função para apresentar os multiplicadores
no cálculo do fatorial. Utilizando essas duas funções apresentar o fatorial de 1 até um número
informado pelo usuário. Esse valor deve estar entre um e 12. Validar a entrada. A saída deve ser
como apresentado na Figura a seguir. Observar que não há o caractere que representa multiplicação
após o número 1. */
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
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
