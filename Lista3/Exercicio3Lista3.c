/*3) Fazer fun��es para:
a) mostrar os m�ltiplos de y entre 1 (se for o caso) e 'x', sendo 'x' o valor at� o qual os m�ltiplos de
y devem ser mostrados. A fun��o recebe por par�metro o n�mero e valor que representa m�ltiplo
de. Por exemplo: par�metros 10 (como x) e 2 (como y) significa os m�ltiplos de 2 entre 2 e 10.
b) somar os m�ltiplos de y entre 1 (se for o caso) e 'x', sendo 'x' o valor at� o qual os m�ltiplos
devem ser somados. Por exemplo: par�metros 10 (como x) e 2 (como y) significa somar os
m�ltiplos de 2 entre 2 e 10. Esse valor (30, no caso) deve ser retornado da fun��o.
Ler dois valores que representam os limites do intervalo e outro valor que � o �m�ltiplo de�.
Utilizado essas duas fun��es apresentar a sa�da da seguinte forma. Nesse exemplo os valores para
os limites s�o 10 e 13 e o �m�ltiplo de� � 2.
10 � 2, 4, 6, 8, 10. Soma: 30.
11 � 2, 4, 6, 8, 10. Soma: 30.
12 - 2, 4, 6, 8, 10, 12. Soma: 42.
13 - 2, 4, 6, 8, 10, 12. Soma: 42.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int x, y, i, m ;

    do
    {
        system("cls");
        //
        printf("Informe um limite : ");
        scanf("%d", &x);
        printf("Informe outro limite : ");
        scanf("%d", &y);
        printf("Informe o multiplo: ");
        scanf("%d", &m);

        for(i=x; i<=y; i++)
        {
            printf("%d - ", i);
            multiy_yx(m, i);
            printf(" - soma: %d",somamultiy_yx(m, i));
            printf("\n");
        }


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
