/*4) Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna a quantidade de
divisores que esse número possui.
a) Usar essa função para mostrar a quantidade de divisores de valores informados pelo usuário.
Repetir a leitura enquanto informados valores positivos.
b) Usar essa função para mostrar a quantidade de divisores de um intervalo informado pelo usuário.
O intervalo deve ser apresentado em ordem crescente, independentemente da ordem que os valores
forem informados.
c) Usar essa função para verificar e apresentar a maior quantidade de divisores, e o respectivo valor
que a contém, de números informados pelo usuário. Repetir a leitura enquanto informados valores
positivos.*/
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
int main(void)
{
    char repetir;
    char opcao;
    int num, num2;
    int i;
    int maior, menor;
    char primeiro = 's';
    int x;

    do
    {
        system("cls");
        //
        printf("A - Usar essa função para mostrar a quantidade de divisores de valores informados pelo usuário.\n");
        printf("B - Usar essa função para mostrar a quantidade de divisores de um intervalo informado pelo usuário.\n");
        printf("C - Usar essa função para verificar e apresentar a maior quantidade de divisores, e o respectivo valor que a contém, de números informados pelo usuário.\n");
        printf("\nOpcao: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch(opcao)
        {
        case 'a':
        case 'A':
            {
                do
                {
                    printf("Informe um numero: ");
                    scanf("%d", &num);
                    if(num>=0)
                    {
                        printf("\n%d possui %d divisores\n", num, qtddiv(num));
                    }
                }while(num>=0);
                break;
            }
        case 'b':
        case 'B':
            {
                printf("\nInforme o primeiro limite: ");
                scanf("%d", &num);
                printf("\nInforme o segundo limite: ");
                scanf("%d", &num2);

                if(num>num2)
                {
                    i=num;
                    num=num2;
                    num2=i;
                }
                for(i=num; i<=num2; i++)
                {
                    printf("%d possui %d divisores\n", i, qtddiv(i));
                }
                break;
            }
        case 'c':
        case 'C':
            {
                do
                {
                    printf("Informe um numero: ");
                    scanf("%d", &num);
                    if(num>=0)
                    {
                        if(primeiro=='s')
                        {
                            maior = qtddiv(num);
                            primeiro = 'j';
                        }
                        else
                        {
                            if(qtddiv(num)>maior)
                            {
                                maior = qtddiv(num);
                                x = num;
                            }
                        }
                    }
                }while(num>=0);
                printf("\n%d possui a maior quantidade de divisores = %d", x, maior);
            }
        default:
            {
                printf("\nOpcao invalida");
            }
        }


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir =='S');
    system("pause");
    return(0);
}
