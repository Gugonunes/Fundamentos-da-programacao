/*1) Ler dois números que representam os limites de um intervalo. Mostrar os pares e divisíveis
por três desse intervalo, em ordem decrescente e em colunas ('n' números por linha separados
por tabulação). 'n' é informado pelo usuário e deve ser validado para obter uma entrada
positiva. Calcular e mostrar a média dos ímpares e não divisíveis por 5 desse intervalo.
Validar para que não seja realizada uma divisão por zero.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int limite1, limite2, num, i, qtd;

    do
    {
        system("cls");
        //
        qtd = 0;
        do
        {
            printf("Informe um limite: ");
            scanf("%d", &limite1);
        }while(limite1<0);

        do
        {
            printf("Informe outro limite: ");
            scanf("%d", &limite2);
        }while(limite2<0);

        do
        {
            printf("Informe um numero de colunas: ");
            scanf("%d", &num);
        }while(num<0);

        if(limite1>limite2)
        {
            i = limite1;
            limite1 = limite2;
            limite2 = i;
        }

        for(i=limite2; i>=limite1; i--)
        {
            if(i%3==0 && i%2==0)
            {
                printf("%d\t", i);
                qtd++;
                if(qtd%num==0)
                {
                    printf("\n");
                }
            }
        }


        printf("\nExecutar novamente?");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir == 's' || repetir == 'S');
    system("pause");
    return(0);
}
