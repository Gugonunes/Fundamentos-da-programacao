/*5) Fazer uma fun��o que mostre os divisores de um n�mero. Essa fun��o recebe como par�metro o
n�mero e mostra os divisores de 1 at� o n�mero passado como par�metro da fun��o.
a) Usar essa fun��o para mostrar os divisores de valores informados pelo usu�rio. Validar para que
seja uma entrada positiva.
b) Usar essa fun��o para mostrar os divisores de cada n�mero de um intervalo com os limites
informados pelo usu�rio. E a fun��o do exerc�cio anterior para apresentar a quantidade de divisores.
Apresentar primeiro os divisores e em seguida (no final da respectiva linha) a quantidade de
divisores.
Exemplo:
intervalo entre 5 e 7
5 => 1 5. Total de divisores: 2
6 => 1 2 3 6. Total de divisores: 4
7 => 1 7. Total de divisores: 2*/

#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    char opcao;
    int num, num2, i, j;

    do
    {
        system("cls");
        //

        printf("A - Mosrar os divisores dos numeros informados\n");
        printf("B - Mostra os divisores entre um intervalo\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch(opcao)
        {
        case 'A':
        case 'a':
            {
                do
                {
                    printf("\nInforme um numero: ");
                    scanf("%d", &num);
                    if(num>0)
                    {
                        printf("%d possui %d divisores", num, qtddiv(num));
                    }
                }while(num>0);
                break;
            }
        case 'b':
        case 'B':
            {
                printf("\nInforme um limite: ");
                scanf("%d", &num);
                printf("\nInforme outro limite: ");
                scanf("%d", &num2);

                if(num>num2)
                {
                    i = num;
                    num = num2;
                    num2 = i;
                }
                for(i=num; i<=num2; i++)
                {
                    printf("%d - ", i);
                    for(j=1; j<=i; j++)
                    {
                        if(i%j==0)
                        {
                            printf("%d\t", j);
                        }
                    }
                    printf("- > %d divisores\n", qtddiv(i));
                }
                break;
            }
        default:
            {
                printf("\nOpcao invalida");
            }
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}

