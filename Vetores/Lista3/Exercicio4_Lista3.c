/*4) Gerar um vetor de inteiros com 100 elementos, com valores entre -50 e +50. �
poss�vel para isso utilizar a fun��o que criamos para gerar valores dentro de um
limite? Em seguida, compactar o vetor, retirando os valores nulos e negativos. Duas
solu��es s�o solicitas:
a) compactar copiando para um novo vetor. Que deve ter o tamanho exato, ou seja, se
h� 10 valores positivos o tamanho do vetor deve ser 10
b) compactar copiando para o mesmo vetor.
Mostrar o vetor gerado e os dois compactados.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vetores.h"
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
