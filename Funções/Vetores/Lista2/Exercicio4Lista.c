/*4) Gerar aleatoriamente 10 elementos para um vetor A e construir um vetor B de mesma
dimens�o com os mesmos elementos de A, mas em ordem invertida, ou seja, o primeiro
elemento de A ser� o �ltimo de B, o segundo elemento de A ser� o pen�ltimo de B e
assim sucessivamente. Represente a solu��o.*/
#include<stdio.h>
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vetores.h"
int main(void)
{
    int vetA[10];
    int vetB[10];
    int i;
    int qtd = 0;

    gerarVetorInt(vetA, 10, 100);
    for(i=9; i>=0; i--)
    {
        vetB[qtd] = vetA[i];
        qtd++;
    }
    mostrarVetorInt(vetA, 10);
    printf("\n");
    mostrarVetorInt(vetB, qtd);
}
