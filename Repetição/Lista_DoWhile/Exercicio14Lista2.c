/*14) (Desafio) As instru��es de programa a seguir podem ser alteradas de forma que a
instru��o �if (Num != -99)� n�o seja necess�ria? Se sim, como; e se n�o, por qu�?*/
#include<stdio.h>

//N�o h� como sem um if, devido ao fato de que � necessario validar para que o -99 nao seja considerado
//O maximo possivel � retirar o if de dentro do while
int main (void)
{
    int num=0, maior, menor;
    char primeiro='s';

    while (Num != -99)
    {
        printf("Informe um n�mero: ");
        scanf("%d",&Num);

        if(primeiro=='s')
        {
            maior = num;
            menor = num;
            primeiro == 'j';
        }

        if (Num != -99)
        {
            if (Num < Menor)
            {
                Menor = Num;
            }
            else if (Num > Maior)
            {
                Maior = Num;
            }
        }
    }
}
