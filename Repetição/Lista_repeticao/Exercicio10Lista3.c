/*10) Escreva um algoritmo que gere a s�rie de Fibonacci at� o termo 'n' que � informado
pelo usu�rio. A s�rie de Fibonacci � formada pela sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34,
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
