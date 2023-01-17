/*3) Ler dois números que representam os limites de um intervalo. Ler, primeiro, o limite inferior que
deve ser positivo e em seguida ler o segundo valor que deve ser maior que o limite inferior. Validar
as entradas. Apresentar os pares e divisíveis por 3 de cada um dos valores do intervalo da seguinte
forma, para 115 e 123 como limites.*/
#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    char repetir;
    int limiinf, limisup;
    int i, j;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe o limite inferior: ");
            scanf("%d", &limiinf);
            if(limiinf>=0)
            {
                do
                {
                    printf("\nInforme o limite superior: ");
                    scanf("%d", &limisup);
                    if(limisup<=limiinf)
                    {
                        printf("\nLimite inferior invalido");
                    }
                }while(limisup<=limiinf);
            }
            else
            {
                printf("\nLimite superior invalido");
            }
        }while(limiinf<0);

        for(i=limiinf; i<=limisup; i++)
        {
            printf("%d - ", i);
            for(j=1; j<=i; j++)
            {
                if(j%2==0 && j%3==0)
                {
                    printf("%d, ", j);
                }
            }
            printf("\n");
        }



        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir =='S');
    system("pause");
    return(0);
}
