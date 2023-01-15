/*2) Fazer uma função para verificar se um número é primo. A função será implementada
em um arquivo de cabeçalho.
a) Usar essa função para verificar se um número informado pelo usuário é primo. Validar
a entrada para que o usuário informe um número positivo e maior que zero.
b) Usar essa função para mostrar os primos no intervalo entre 1 e 100.
c) Usar essa função para fazer a média dos primos entre 200 e 100.*/

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
        printf("1 - Verificar se um numero é primo\n");
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
                            printf("%d nao é primo", num);
                        }
                        else
                        {
                            retorno = eprimo(num);
                            if(retorno == 0)
                            {
                                printf("%d é primo\n", num);
                            }
                            else
                            {
                                printf("%d nao é primo\n", num);
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
