/*2) Gerar aleatoriamente um vetor com 11 elementos entre 10 e 20. Em seguida ordenar o vetor. Percorrer o vetor ordenado e mostrar a
quantidade de divisores de cada um dos valores armazenados. Utilizar uma fun��o para mostrar os divisores e outra para contar a quantidade.
Ao final mostrar o n�mero que possui a maior quantidade de divisores e a respectiva quantidade.
A figura ao lado exemplifica a execu��o do programa, utiliz�-la como modelo de sa�da.
Esse exerc�cio deve ser feito com fun��es para: criar vetor, ordenar vetor, mostrar vetor,
contar divisores e mostrar divisores.*/
#include<stdio.h>
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vetores.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
int main(void)
{
    int vet[11];
    int qtd;
    int i;
    int maiorQtdDiv=0;
    int numMaiorQtddiv;

    gerarVetorIntIntervalo(vet, 11, 10, 20);
    printf("\nVetor gerado\n");
    mostrarVetorInt(vet, 11);

    ordenar(vet, 11);
    printf("\n\nVetor ordenado\n");
    mostrarVetorInt(vet, 11);
    printf("\n");
    for(i=0; i<11; i++)
    {
        printf("%d - ", vet[i]);
        mostradiv(vet[i]);
        qtd = qtddiv(vet[i]);
        printf("Sao %d divisores\n", qtd);
        if(qtd > maiorQtdDiv)
        {
            maiorQtdDiv = qtd;
            numMaiorQtddiv = vet[i];
        }
    }
    printf("\nO numero %d possui %d divisores\n", numMaiorQtddiv, maiorQtdDiv);
}
