/*2) Fazer fun��es para:
a) Mostrar os divisores de um n�mero.
b) Calcular a quantidade de divisores de um n�mero. Essa quantidade deve ser retornada da fun��o.
c) Encontrar a maior quantidade de divisores de um intervalo de n�meros. Essa quantidade deve ser
retornada da fun��o.
d) Encontrar o n�mero que possui a maior quantidade de divisores de um intervalo de n�meros. O
n�mero deve ser retornado da fun��o.
 Para implementar as fun��es em c) e d) deve, obrigatoriamente, ser utilizada a fun��o em b)
 Utilizando, obrigatoriamente essas quatro fun��es, ler dois valores que representam os limites de
um intervalo de valores e apresentar da seguinte forma (informados 10 e 13 como intervalo):
10 � 1, 2, 5, 10. 4 divisores.
11 � 1, 11. 2 divisores.
12 � 1, 2, 3, 4, 6, 12. 6 divisores.
13 � 1, 13. 2 divisores.
A maior quantidade de divisores desse intervalo � 6 e pertence ao n�mero 12.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int num, num2, i;

    do
    {
        system("cls");
        //
        printf("Informe um numero: ");
        scanf("%d", &num);
        printf("Informe outro numero: ");
        scanf("%d", &num2);

        for(i=num; i<=num2; i++)
        {
            printf("%d - ", i);
            mostradiv(i);
            printf("- %d divisores\n", qtddiv(i));
        }
        printf("A maior quantidade de divisores desse intervalo : %d", maiorqtddiv(num, num2));
        printf(" e pertence ao %d", nummaiorqtddiv(num, num2));

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
