/*2) Fazer uma fun��o para verificar se um n�mero � primo. A fun��o ser� implementada
em um arquivo de cabe�alho.
a) Usar essa fun��o para verificar se um n�mero informado pelo usu�rio � primo. Validar
a entrada para que o usu�rio informe um n�mero positivo e maior que zero.
b) Usar essa fun��o para mostrar os primos no intervalo entre 1 e 100.
c) Usar essa fun��o para fazer a m�dia dos primos entre 200 e 100.*/

#include<stdio.h>
#include<stdlib.h>
#include "primo.h"

int main(void)
{
    char repetir;
    int opcao;
    int num;
    int retorno;
    int soma;
    int qtd;
    float media;
    int i;

    do
    {
        system("cls");
        //
        qtd = 0;
        soma = 0;
        printf("1 - Verificar se um numero � primo\n");
        printf("2 - Mostrar primos entre 1 e 100\n");
        printf("3 - Media dos primos entre 100 e 200\n");
        printf("\nInforme a opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
            {
                //
                do
                {
                    printf("Informe um numero: ");
                    scanf("%d", &num);

                    if(num>=0)
                    {
                        if(num == 0)//if(num<=1)
                        {
                            printf("%d nao � primo", num);
                        }
                        else
                        {
                            retorno = eprimo(num);
                            if(retorno == 0)
                            {
                                printf("%d � primo\n", num);
                            }
                            else
                            {
                                printf("%d nao � primo\n", num);
                            }
                        }
                    }
                }while(num>=0);
                break;
            }
            case 2:
            {
                //
                for(i=1; i<100; i++)
                {
                    if(eprimo(i) == 0)
                    {
                        printf("%d\t", i);
                    }
                }
                break;
            }
            case 3:
            {
                //
                for(i=200; i>100; i--)
                {
                    if(eprimo(i) == 0)
                       {
                           soma = soma + i;
                           qtd++;
                       }
                }
                media = (float)soma / qtd;
                printf("\nMedia dos primos entre 100 e 200: %.2f\n", media);
                break;
            }
            default:
            {
                printf("\nOpcao invalida\n");
            }
        }



        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }
    while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
