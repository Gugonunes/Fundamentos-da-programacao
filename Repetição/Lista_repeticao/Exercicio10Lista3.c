/*10) Escreva um algoritmo que gere a série de Fibonacci até o termo 'n' que é informado
pelo usuário. A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34,
55, ... , etc.*/
#include<stdio.h>
int main(void)
{
    int termo;
    int atual=1, anteorior=1, proximo;
    int i;

    printf("Informe a quantidade de termos: ");
    scanf("%d", &termo);

    printf("1\t1\t");//dois primeiros termos da serie;

    for(i=3; i<=termo; i++)
    {
        proximo = atual + anteorior;
        anteorior = atual;
        atual = proximo;
        printf("%d\t", atual);
    }
}
