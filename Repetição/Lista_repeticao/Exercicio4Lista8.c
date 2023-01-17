/*4) Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer a saída do
programa, da parte do fatorial, como mostrado na figura a seguir. Colocar o símbolo de
multiplicação somente entre dois números.*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int i, j;
    int fat;

    do
    {
        system("cls");
        //

        for(i=1; i<=12; i++)
        {
            fat =1;
            printf("%d! -->", i);
            for(j=i; j>1; j--)
            {
                fat = fat*j;
                printf("%d * ", j);
            }
            printf("1 = %d\n", fat);
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir =='s' || repetir == 'S');
    system("pause");
    return(0);
}
