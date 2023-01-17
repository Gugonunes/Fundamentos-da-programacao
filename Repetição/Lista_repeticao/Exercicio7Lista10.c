/*7) Apresentar n valores divisíveis por 5 e não por 7 com x valores por linha. Validar n e x
adequadamente.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int num, qtdmostrar, qtdmostrados;
    int i;

    do
    {
        system("cls");
        //
        qtdmostrados=0;
        i=0;
        do
        {
            printf("Informe o numero de valores que deseja ver: ");
            scanf("%d", &qtdmostrar);

        }while(qtdmostrar<=0);

        do
        {
            printf("Informe quantos valores por linha deseja ver: ");
            scanf("%d", &num);
        }while(num<=0);

        while(qtdmostrados<qtdmostrar)
        {
            if(i%5==0 && i%7!=0)
            {
                printf("%d\t", i);
                qtdmostrados++;
                if(qtdmostrados%num==0)
                {
                    printf("\n");
                }
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
