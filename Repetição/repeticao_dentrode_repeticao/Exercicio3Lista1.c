/*3) Ler um n�mero positivo e maior que zero (validar a entrada). Esse n�mero indica a quantidade de valores �mpares e n�o divis�veis por 5 e divis�veis por 7 que devem ser mostrados. Apresentar 'n' valores por linha. 'n' � informado pelo usu�rio e deve ser maior que zero. Validar a entrada.*/
#include<stdio.h>
#include<stdlib.h>//system();

int main(void)
{
    char repetir;
    int qtdmostrar;
    int qtdjamostrados;
    int aux;
    int qtdlinha;

    do
    {
        system("cls");
        qtdjamostrados = 0;
        aux=1;
        do
        {
            printf("Quantos valores mostrar?: ");
            scanf("%d", &qtdmostrar);
        }while(qtdmostrar<0);

        do
        {
            printf("Quantos valores por linha?: ");
            scanf("%d", &qtdlinha);
        }while(qtdlinha <=0);

        while(qtdjamostrados < qtdmostrar)
        {
            if(aux%2!=0 && aux%5!=0 && aux%7 == 0)
            {
                printf("%d\t", aux);
                qtdjamostrados++;
                if(qtdjamostrados % qtdlinha == 0)
                {
                    printf("\n");
                }
            }
            aux++;
        }


        //
        printf("\nExecutar novamente(s/S): ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir == 's' || repetir == "S");
    system("pause");
    return(0);
}
