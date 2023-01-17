/*5) Apresentar os primos entre dois limites informados pelo usuário. Apresentar os primos de 1 ou 2
até o número do intervalo.*/
#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    char repetir;
    int limiinf, limisup;
    int i, j;
    int aux, qtd;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe um dos limites: ");
            scanf("%d", &limiinf);
        }while(limiinf<0);

        do
        {
            printf("Informe o outro limite: ");
            scanf("%d", &limisup);
        }while(limisup<0);

        if(limiinf>limisup)
        {
            i = limiinf;
            limiinf = limisup;
            limisup = i;
        }

        for(i=limiinf; i<=limisup; i++)
        {
            printf("%d = ", i);
            for(j=2; j<=i; j++)
            {
                qtd=0;
                for(aux=2; aux<=j/2; aux++)
                {
                    if(j%aux==0)
                    {
                        qtd++;
                    }

                }
                if(qtd==0)
                {
                    printf("%d\t", j);
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
