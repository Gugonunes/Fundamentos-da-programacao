/*2) Fazer funções para:
a) Mostrar os divisores de um número.
b) Calcular a quantidade de divisores de um número. Essa quantidade deve ser retornada da função.
c) Encontrar a maior quantidade de divisores de um intervalo de números. Essa quantidade deve ser
retornada da função.
d) Encontrar o número que possui a maior quantidade de divisores de um intervalo de números. O
número deve ser retornado da função.
 Para implementar as funções em c) e d) deve, obrigatoriamente, ser utilizada a função em b)
 Utilizando, obrigatoriamente essas quatro funções, ler dois valores que representam os limites de
um intervalo de valores e apresentar da seguinte forma (informados 10 e 13 como intervalo):
10 – 1, 2, 5, 10. 4 divisores.
11 – 1, 11. 2 divisores.
12 – 1, 2, 3, 4, 6, 12. 6 divisores.
13 – 1, 13. 2 divisores.
A maior quantidade de divisores desse intervalo é 6 e pertence ao número 12.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
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
