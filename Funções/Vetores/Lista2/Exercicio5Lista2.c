/*5) Gerar aleatoriamente dois vetores A e B com n elementos. O usuário informa a
quantidade de elementos dos vetores, ou seja, o seu tamanho. Validar para que seja
informado um valor positivo para a quantidade de elementos. Mostrar os elementos
desses vetores. Construir um vetor C, em que cada elemento de C será 1, quando o
elemento de A for maior que o respectivo elemento em B; 0, quando o elemento de A for
igual ao respectivo elemento em B; e -1 quando o elemento de A for menor que o
respectivo elemento em B. Mostrar os elementos desse vetor C.*/
#include<stdio.h>
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
int main(void)
{
    int tam;
    int i;

    do
    {
        printf("\nInforme o tamanho do vetor: ");
        scanf("%d", &tam);
    }while(tam<0);
    int vetA[tam];
    int vetB[tam];

    gerarVetorInt(vetA, tam, 100);
    gerarVetorInt(vetB, tam, 100);
    printf("\nVetor A: ");
    mostrarVetorInt(vetA, tam);
    printf("\nVetor B: ");
    mostrarVetorInt(vetB, tam);
    int vetC[tam];
    for(i=0; i<tam; i++)
    {
        if(vetA[i] > vetB[i])
        {
            vetC[i] = 1;
        }
        else if(vetA[i] == vetB[i])
        {
            vetC[i] = 0;
        }
        else
        {
            vetC[i] = -1;
        }
    }
    printf("\nVetor C:");
    mostrarVetorInt(vetC, tam);
}
