/*6) Fazer um programa para determinar o valor S da série:
S = (x +1 / y – 10) + (x + 2 / y – 9 ) + (x+3 / y – 8) + ... + (x+10 / y -1).
Onde x e y são valores informados pelo usuário.*/
#include<stdio.h>
int main(void)
{
    int i, x, y, j, qtd=0;
    float soma=0;

    printf("Informe os valores x e y(x/y): ");
    scanf("%d/%d", &x, &y);

    for(i=1; i<=10; i++)
    {
        j = i-11;
        if(j!=-y)
        {
            soma = soma + ((x+i)/(y+j));
            qtd++;
            if(y!=1)
            {
                if(i!=10)
                {
                    printf("(%d+%d / %d%d)+", x, i, y, j);
                }
                else
                {
                    printf("(%d+%d / %d%d) --->", x, i, y, j);
                }
            }

            else
            {
                if(i!=9)
                {
                    printf("(%d+%d / %d%d)+", x, i, y, j);
                }
                else
                {
                    printf("(%d+%d / %d%d) --->", x, i, y, j);
                }
            }
        }

        if(qtd%5==0)
        {
            printf("\n");
        }

    }
    printf("Soma: %.2f", soma);
}


