/*5) Apresentar os números primos entre 1 e 100.*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char repetir;
    int i, aux, qtd;

    do
    {
        system("cls");
        //

        for(i=1; i<=100; i++)
        {
            qtd=0;
            for(aux=2; aux <= i/2; aux++)
            {
                if(i%aux==0)
                {
                    qtd++;
                    aux = 100;
                }
            }
            if(qtd==0)
            {
                printf("%d\t", i);
            }
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir == 'S');
    system("pause");
    return(0);
}
