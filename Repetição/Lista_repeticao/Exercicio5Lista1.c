/*5) O que faz o algoritmo a seguir?
declare valor, maior como inteiro
leia valor
maior ← valor
para j = 0 até j < 4 passo 1
leia valor
se valor > maior então
maior ← valor
fim-se
fim-para
escreva maior
Implemente esse algoritmo utilizando a linguagem C.
Desafio) Como alterar o algoritmo para não ser necessário fazer uma leitura do valor antes da
estrutura para … até?*/
#include<stdio.h>
int main(void)
{
    int j, valor, maior;

    printf("Informe um valor: ");
    scanf("%d", &valor);

    maior=valor;

    for(j=0;j<4;j++)
    {
        printf("Informe um valor: ");
        scanf("%d", &valor);

        if(valor>maior)
        {
            maior=valor;
        }
    }
    printf("\n%d maior", maior);
}
