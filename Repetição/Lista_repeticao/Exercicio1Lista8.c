/*1) Ler dois n�meros que representam os limites de um intervalo. Mostrar os pares e divis�veis
por tr�s desse intervalo, em ordem decrescente e em colunas ('n' n�meros por linha separados
por tabula��o). 'n' � informado pelo usu�rio e deve ser validado para obter uma entrada
positiva. Calcular e mostrar a m�dia dos �mpares e n�o divis�veis por 5 desse intervalo.
Validar para que n�o seja realizada uma divis�o por zero.*/
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
