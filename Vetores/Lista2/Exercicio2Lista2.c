/*2) Gerar aleatoriamente 8 elementos para um vetor A. Construir um vetor B de mesma
dimensão com os elementos de A multiplicados por 2. Represente a solução.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;

    do
    {
        system("cls");
        //
        int vetA[8];
        int vetB[8];
        int i;


        gerarVetorInt(vetA, 8, 100);
        for(i=0; i<8; i++)
        {
            vetB[i] = vetA[i]*2;
        }
        printf("\nVetA: ");
        mostrarVetorInt(vetA, 8);
        printf("\nVetB: ");
        mostrarVetorInt(vetB, 8);


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}

