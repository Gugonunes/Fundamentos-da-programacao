/*2) Escreva um programa que imprima todas as possibilidades de que no lan�amento de
dois dados a soma das faces seja um valor informado pelo usu�rio. O usu�rio deve
informar um valor v�lido, entre 2 a 12. Repetir a leitura at� que o usu�rio informe um
valor v�lido. Mostrar da seguinte forma, para, por exemplo, informado o valor 7:
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

