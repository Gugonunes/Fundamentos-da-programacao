/*3) Gerar aleatoriamente 7 elementos para um vetor A. Construir um vetor B de mesmo
tamanho, sendo que cada elemento de B deverá ser o elemento de A correspondente
multiplicado por sua posição (ou índice), ou seja, B[i] = A[i] * i. Represente a solução.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;

    do
    {
        system("cls");
        //
        int vetA[7];
        int vetB[7];
        int i;


        gerarVetorInt(vetA, 7, 100);
        for(i=0; i<7; i++)
        {
            vetB[i] = vetA[i]*i;
        }
        printf("\nVetA: ");
        mostrarVetorInt(vetA, 7);
        printf("\nVetB: ");
        mostrarVetorInt(vetB, 7);


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
