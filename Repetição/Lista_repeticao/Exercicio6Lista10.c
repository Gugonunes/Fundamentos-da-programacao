/*Apresentar n valores que atende �s condi��es de serem divis�veis por x e por y. Esses valores s�o
informados pelo usu�rio e devem ser maiores que zero. Valid�-los.*/
#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    char repetir;
    int qtdmostrar, qtdmostrados;
    int x, y;
    int i;

    do
    {
        system("cls");
        //
        qtdmostrados=0;
        i=1;
        do
        {
            printf("Informe quantos valores mostrar(valor positivo): ");
            scanf("%d", &qtdmostrar);

        }while(qtdmostrar<=0);

        do
        {
            printf("\nInforme o primeiro divisor: ");
            scanf("%d", &x);
        }while(x<=0);

        do
        {
            printf("\nInforme o segundo divisor: ");
            scanf("%d", &y);
        }while(y<=0);

        while(qtdmostrados<qtdmostrar)
        {
            if(i%x==0 && i%y==0)
            {
                printf("%d\t", i);
                qtdmostrados++;
            }
            i++;
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir == 'S');
    system("pause");
    return(0);
}
