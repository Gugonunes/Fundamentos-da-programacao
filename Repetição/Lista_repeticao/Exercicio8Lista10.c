/*Um número ‘n’ inteiro e positivo é perfeito se ‘n’ for igual à soma de seus divisores positivos
diferentes de ‘n’. Construa um programa que verifica números informados pelo usuário são
perfeitos. O programa é finalizado quando informado zero ou valor negativo como entrada
Ex: 6 é perfeito, pois 1+2+3 = 6.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int num, soma, i;

    do
    {
        system("cls");
        //

        do
        {
            printf("Informe um numero: ");
            scanf("%d", &num);

            if(num>0)
            {
                soma=0;
                for(i=num-1; i>0; i--)
                {
                    if(num%i==0)
                    {
                        printf("%d + ", i);
                        soma = soma + i;
                    }
                }
                printf("=%d", soma);
                if(soma == num)
                {
                    printf("\n%d e Perfeito\n", num);
                }
                else
                {
                    printf("\n%d nao e perfeito\n", num);
                }

            }
        }while(num>0);


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
