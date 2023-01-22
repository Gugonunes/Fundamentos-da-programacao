/*14) (Desafio) As instruções de programa a seguir podem ser alteradas de forma que a
instrução “if (Num != -99)” não seja necessária? Se sim, como; e se não, por quê?*/
#include<stdio.h>

//Não há como sem um if, devido ao fato de que é necessario validar para que o -99 nao seja considerado
//O maximo possivel é retirar o if de dentro do while
int main (void)
{
    int num=0, maior, menor;
    char primeiro='s';

    while (Num != -99)
    {
        printf("Informe um número: ");
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
