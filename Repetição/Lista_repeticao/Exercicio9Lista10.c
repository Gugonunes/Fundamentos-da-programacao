/*Fa�a um algoritmo que o usu�rio informa um n�mero e o algoritmo verifica se ele � um n�mero
triangular. Um n�mero � triangular quando o resultado do produto de tr�s n�meros consecutivos.
Exemplo: 24 = 2 x 3 x 4.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int num, mult;
    int i, j, qtd;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe um numero(0 para sair): ")/
            scanf("%d", &num);

            if(num!=0)
            {
                qtd=0;
                for(i=1; i<=num/2; i++)
                {
                    mult=1;

                    for(j=i; j<=i+2; j++)
                    {
                        mult = mult * j;

                    }
                    if(mult == num)
                    {
                        printf("\n%d e triangular\n", num);
                        qtd++;
                    }
                }
                if(qtd==0)
                {
                    printf("\n%d nao e triangular\n", num);
                }
            }
        }while(num!=0);



        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir == 'S');
    system("pause");
    return(0);
}
