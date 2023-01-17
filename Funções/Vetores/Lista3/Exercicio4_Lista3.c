/*4) Gerar um vetor de inteiros com 100 elementos, com valores entre -50 e +50. É
possível para isso utilizar a função que criamos para gerar valores dentro de um
limite? Em seguida, compactar o vetor, retirando os valores nulos e negativos. Duas
soluções são solicitas:
a) compactar copiando para um novo vetor. Que deve ter o tamanho exato, ou seja, se
há 10 valores positivos o tamanho do vetor deve ser 10
b) compactar copiando para o mesmo vetor.
Mostrar o vetor gerado e os dois compactados.*/
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



        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
