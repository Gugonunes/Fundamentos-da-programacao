/*6) Gerar aleatoriamente 10 elementos para um vetor. Desse vetor, calcular e mostrar:
a) A soma de elementos armazenados nesse vetor que são inferiores a 100;
b) A quantidade de elementos armazenados nesse vetor que são iguais a 100;
c) A média dos elementos armazenados nesse vetor que são superiores a 100.
Validar para não realizar uma divisão por zero.*/
#include<stdio.h>
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
int main(void)
{
    int vet[10];
    int soma=0;
    int qtd100=0;
    int qtdmaior100=0;
    float media;
    int somamaior100=0;
    int i;

    gerarVetorInt(vet, 10, 1000);
    mostrarVetorInt(vet, 10);

    for(i=0; i<10; i++)
    {
        if(vet[i]<100)
        {
            soma = soma + vet[i];
        }
        else if(vet[i]==100)
        {
            qtd100++;
        }
        else
        {
            somamaior100 = somamaior100 + vet[i];
            qtdmaior100++;
        }
    }

    printf("\nSoma dos inferiores a 100: %d", soma);
    printf("\nQuantidade de elementos iguais a 100: %d", qtd100);

    if(qtdmaior100!=0)
    {
        media = (float)somamaior100/qtdmaior100;
        printf("\nMedia dos elementos superiores a 100: %.2f", media);
    }


}
