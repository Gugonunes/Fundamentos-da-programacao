/*6) Ler uma string, calcular e mostrar quantos caracteres a mesma possui, incluindo
espaços e outra contagem não incluindo espaços.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    char texto[501];
    int i;
    int qtd;
    int qtd2;

    do
    {
        system("cls");
        //
        i=0;
        qtd = 0;
        qtd2 = 0;
        printf("\nInforme um texto: ");
        fflush(stdin);
        gets(texto);
        while(texto[i]!='\0')
        {
            if(texto[i]==32)
            {
                qtd2++;
            }
            else
            {
                qtd++;
                qtd2++;
            }
            i++;
        }
        printf("\nCom espacos: %d", qtd2);
        printf("\nSem espacos: %d", qtd);


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
