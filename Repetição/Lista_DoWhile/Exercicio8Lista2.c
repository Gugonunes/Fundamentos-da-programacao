/*8) Qual o objetivo do algoritmo representado no trecho de c�digo a seguir. Explique a
forma de a��o de cada estrutura de repeti��o.*/
#include<stdio.h>
int main (void)
{
    int cont;
    for (Cont=1; Cont<=5; Cont++)
    {
        do
        {
            printf("Informe a Idade:");
            scanf("%d",&Idade);
        } while (Idade < 0);//validar a idade
        do
        {
            printf("Informe o tipo, (E)estudante/(P)Professor:");
            fflush(stdin);
            scanf("%c",&Tipo);
        }while(Tipo !='E' && Tipo!='e' && Tipo!='P' && Tipo!='p');//validar o tipo

        if (Tipo=='p' || Tipo =='P')
        {
            do
            {
                printf ("Informe o salario:");
                scanf("%f",&Salario);
            }while (Salario<=0);//validar o salario
        }
    }
}//realiza 5 vezes um c�digo que pede o tipo(estudante ou professor) e se for professor pede o salario;
