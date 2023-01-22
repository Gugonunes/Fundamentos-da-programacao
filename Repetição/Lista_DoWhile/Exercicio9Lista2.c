/*9) Qual o objetivo do algoritmo representado no trecho de código a seguir.*/
#include<stdio.h>
int main (void)
{
    int num, tentativas=0;
    do
    {
        printf("Informe um valor positivo: ");
        scanf("%f",&Num);
        if (Num < 0)
        {
            Tentativas++;
        }
    }while(Num < 0);
}//quantas tentaivas foram necessarias para o usuario informar um numero positivo;
