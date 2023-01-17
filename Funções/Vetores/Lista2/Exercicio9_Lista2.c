/*9) O que faz o algoritmo a seguir:
declare a[50], i, soma como inteiro
declare media como real
soma = 0
repetir i = 0, até i< 50, passo 1
leia a[i]

fim-repetir
repetir i = 0, até i< 50, passo 1
soma = soma + a[i]

fim-repetir
repetir i = 0, até i < 50, passo 1
escreva a[i]
fim-repetir

media = soma / 50
escreva media
Implemente uma solução na linguagem C para esse algoritmo. Devem ser utilizadas
funções para gerar o vetor, somar e mostrar os elementos do vetor.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int vet[50];
    int i, soma;
    float media;

    do
    {
        system("cls");
        //
        soma = 0;

        gerarVetorIntIntervalo(vet, 50, 0, 150);

        for(i=0; i<50; i++)
        {
            soma = soma + vet[i];
        }
        for(i=0; i<50; i++)
        {
            printf("%d\t", vet[i]);
        }

        media = (float)soma/50;
        printf("\n\nMedia: %.2f", media);

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
