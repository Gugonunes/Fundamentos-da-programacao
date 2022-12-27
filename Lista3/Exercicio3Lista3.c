/*3) Fazer funções para:
a) mostrar os múltiplos de y entre 1 (se for o caso) e 'x', sendo 'x' o valor até o qual os múltiplos de
y devem ser mostrados. A função recebe por parâmetro o número e valor que representa múltiplo
de. Por exemplo: parâmetros 10 (como x) e 2 (como y) significa os múltiplos de 2 entre 2 e 10.
b) somar os múltiplos de y entre 1 (se for o caso) e 'x', sendo 'x' o valor até o qual os múltiplos
devem ser somados. Por exemplo: parâmetros 10 (como x) e 2 (como y) significa somar os
múltiplos de 2 entre 2 e 10. Esse valor (30, no caso) deve ser retornado da função.
Ler dois valores que representam os limites do intervalo e outro valor que é o “múltiplo de”.
Utilizado essas duas funções apresentar a saída da seguinte forma. Nesse exemplo os valores para
os limites são 10 e 13 e o “múltiplo de” é 2.
10 – 2, 4, 6, 8, 10. Soma: 30.
11 – 2, 4, 6, 8, 10. Soma: 30.
12 - 2, 4, 6, 8, 10, 12. Soma: 42.
13 - 2, 4, 6, 8, 10, 12. Soma: 42.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
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
