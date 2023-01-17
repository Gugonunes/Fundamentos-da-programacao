/*Implemente um algoritmo que leia números inteiros até que seja lido um número que seja o
dobro ou a metade do anteriormente lido. No final deve ser apresentado:
a) a media dos valores lidos que são negativos e ímpares.
b) os dois valores lidos que definiram a finalização da execução do programa.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int num, num1, num2;
    int soma, qtd;
    float media;
    char primeiro = 's';

    do
    {
        system("cls");
        //
        soma = 0;
        qtd=0;
        primeiro = 's';
        do
        {
            if(primeiro == 's')
            {
               num1 = num2;
               num = num2;
               primeiro = 'j';

            }
            else
            {
                num1 = num2*2;
                num = num2/2;
            }

            printf("Informe um numero: ");
            scanf("%d", &num2);

            if(num2!=num1 && num2!=num)
            {
                if(num2<0 && num2%2!=0)
                {
                    soma = soma + num2;
                    qtd++;
                }
            }

        }while(num2!=num1 && num2!=num);

        if(qtd!=0)
        {
            media = soma/qtd;
            printf("\n\nMedia dos negativos e impares: %.2f", media);
        }
        if(num2==num1)
        {
            num1 = num2/2;
            printf("\nValores que finalizaram o programa: %d e %d", num2, num1);
        }
        else if(num2==num)
        {
            num = num*2;
            printf("\nValores que finalizaram o programa: %d e %d", num2, num);
        }




        printf("\nExecutar novamente: ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir =='S');
    system("pause");
    return(0);

}
