/*6) Ler dois números que representam os limites de um intervalo e ler o incremento.
Mostrar os números desse intervalo de acordo com o incremento indicado e em ordem
crescente. O usuário pode informar os valores que representam os limites do intervalo em
ordem crescente ou decrescente.*/
#include<stdio.h>
int main(void)
{
    int i;
    int limiteinf, limitesup;
    int inc;

    printf("Informe um dos limites: ");
    scanf("%d", &limiteinf);

    printf("Informe o outro limite: ");
    scanf("%d", &limitesup);

    printf("Informe o incremento: ");
    scanf("%d", &icr);

    if(limitesup < limiteinf)
    {
        i = limiteinf;
        limiteinf = limitesup;
        limitesup = i;
    }
    for(i=limiteinf;i<=limitesup;i=i+icr)
    {
        printf("%d\t", i);
    }
}
