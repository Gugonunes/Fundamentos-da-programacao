/*7) Fazer um programa que leia cinco números inteiros no intervalo entre 10 até 20, inclusive. Validar a entrada.
Para cada número exibir a sequência dos pares de 2 até o número gerado e a soma desses pares.*/
#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    char repetir;
    int qtd, qtdpar;
    int num;
    int soma;
    int i;

    do
    {
        system("cls");
        //
        qtd = 0;
        do
        {
            printf("Informe um numero entre 10 e 20: ");
            scanf("%d", &num);
            if(num>=10 && num<=20)
            {
                qtd++;
                printf("%d===>", num);

                soma = 0;
                for(i=2; i<=num; i++)
                {
                    qtdpar=0;
                    if(i%2==0)
                    {
                        printf("%d ", i);
                        qtdpar++;
                        soma= soma + i;
                    }
                }
                printf("<=== Soma = %d\n", soma);
            }
            else
            {
                printf("\nNumero invalido\n");
            }
        }while(qtd<5);


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", repetir);
    }while(repetir == 's' || repetir == 'S');
    system("pause");
    return(0);
}
