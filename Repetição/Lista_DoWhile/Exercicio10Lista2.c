/*10) Qual o objetivo do algoritmo representado no trecho de c�digo a seguir.*/
#include<stdio.h>
int main(void)
{
    do
    {
        printf("Informe um n�mero entre 1 e 50: ");
        scanf("%d",&Num);
    if((Num < 1) || (Num > 50))
    {
        printf("valor informado fora da faixa.\n");
    }
    }while((Num < 1) || (Num > 50));

    while((Num * 2) < 250)
    {
        Num = Num * 2;
        printf("%d\n",Num);
    }
}//validar se o numero esta entre 1 e 50 e depois ira multiplicar o numero por 2 at� que atinja 250;
