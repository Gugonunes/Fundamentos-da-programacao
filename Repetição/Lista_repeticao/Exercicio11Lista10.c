/*11) Implemente um algoritmo que encontre o n (exemplo quinto) número maior que z, que seja
divisível por x e não y. n, z, x e y são informados pelo usuário e devem ser validados.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int n, z, x, y;
    int qtd;
    int i, j;

    do
    {
        system("cls");
        //
        do
        {
            printf("Informe o numero: ");
            scanf("%d", &z);

            if(z>0)
            {
                qtd=0;
                do
                {
                    printf("\nInforme o n-esimo termo que deseja ver: ");
                    scanf("%d", &n);
                }while(n<=0);

                do
                {
                    printf("\nInforme o valor de x: ");
                    scanf("%d", &x);
                }while(x<=0);

                do
                {
                    printf("\nInforme o valor de y: ");
                    scanf("%d", &y);
                }while(y<=0);
                //fazer a conta

                for(i=z+1; i>0; i++)
                {
                    if(i%x==0 && i%y!=0)
                    {
                        qtd++;
                        if(qtd==n)
                        {
                           j=i;
                           i=-1;
                        }
                    }
                }
            }

            printf("\n\nO %d-esimo termo de %d= %d\n", n, z, j);
        }while(z>0);



        printf("\nExecutar novamente");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir == 'S');
    system("pause");
    return(0);
}
