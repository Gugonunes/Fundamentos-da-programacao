/*2) Escreva um programa que imprima todas as possibilidades de que no lançamento de
dois dados a soma das faces seja um valor informado pelo usuário. O usuário deve
informar um valor válido, entre 2 a 12. Repetir a leitura até que o usuário informe um
valor válido. Mostrar da seguinte forma, para, por exemplo, informado o valor 7:
1 + 6 = 7
2 + 5 = 7
3 + 4 = 7
4 + 3 = 7
5 + 2 = 7
6 + 1 = 7
*/
#include<stdio.h>
#include(stdlib.h>
int main(void)
{
    int i, j, num;
    char repetir;

    do
    {
        system("cls");
        //

        do
        {
            printf("Informe o numero: ");
            scanf("%d", &num);
        }while(num<2 || num>12);

        for(i=1; i<=6; i++)
        {
            for(j=6; j>=1; j--)
            {
                if(j+i == num)
                {
                    printf("%d + %d = %d", i, j, num);
                }
            }
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir == 's' || repetir =='S');
    system("pause");
    return(0);

}

