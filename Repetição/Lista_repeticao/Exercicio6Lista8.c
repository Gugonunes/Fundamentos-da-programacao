/*6) Fazer um programa para: Mostrar os divisores, calcular a quantidade deles e mostrar essa quantidade para os
números compreendidos entre o valor ‘x’ informado pelo usuário e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um número positivo entre 2 e 100.
Ao final mostrar a maior quantidade de divisores.
A figura ao lado exemplifica a execução, utilizá-la como modelo para o programa implementado.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int num;
    int qtddiv;
    int maiorqtd;
    int i;
    int aux;

    do
    {
        system("cls");
        //
        aux=1;
        maiorqtd = 0;
        qtddiv = 0;
        do
        {
            printf("Informe um numero entre 2 e 100: ");
            scanf("%d", &num);
            if(num<2 || num>100)
            {
                printf("\nNumero invalido\n");
            }

        }while(num<2 || num>100);

        for(i=num; i<=(num+10); i++)
        {
            qtddiv = 0;
            printf("%d-->", i);
            while(aux<=num)
            {
                if(i%aux==0)
                {
                    qtddiv++;
                    printf("%d,", aux);
                }
                aux++;
            }
            printf("...%d divisores\n", qtddiv);
            aux=1;

            if(qtddiv>maiorqtd)
            {
                maiorqtd = qtddiv;
            }
        }
        printf("\n\nMaior numero de divisores: %d", maiorqtd);



        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir == 's' || repetir == 'S');
    system("pause");
    return(0);

}
