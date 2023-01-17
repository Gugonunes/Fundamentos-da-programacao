//#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include<stdlib.h>
#include<stdio.h>
//gerar valores inteiros para um vetor
void gerarVetorInt(int vetor[], int tam, int limite)
{
    int i;
    for(i=0; i<tam; i++)//percorrer o vetor pelo indice
    {
        vetor [i] = rand() % (limite + 1);
    }
}

//mostrar os valores de um vetor de inteiros
void mostrarVetorInt(int vetor[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%10d", vetor[i]);
    }
}

//ordenar os valors de um vetor de inteiros
//metodo bolha
void ordenar(int vet[], int tam)
{
    int i, j, aux;
    for(i=0; i<tam; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(vet[i] > vet[j])//se necessario trocar
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}
//gerar vetor intervalo
void gerarVetorIntIntervalo(int vetor[], int tam, int limiteinf, int limitesup)
{
    int i;
    for(i=0; i<tam; i++)//percorrer o vetor pelo indice
    {
        vetor [i] = rand() % (limitesup - limiteinf + 1) + limiteinf;
    }
}
//mostra indice de um numero em um vetor
int indicenovetor(int vet[],int tam, int num)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(vet[i]==num)
        {
            return(i);
        }
    }
    return(-1);
}

//definir o tamanho de uma string
int contarString(char texto[])
{
    int i=0;
    while(texto[i] != '\0')
    {
        //
        i++;
    }
    return(i);
}

//verificar se um determinado caractere esta na string
//retorna o indice da primeira ocorrencia do caractere na string ou -1 se o caractere nao esta na string
int verificarCaractere(char texto[], char caractere)
{
    int i=0;
    while(texto[i]!='\0')
    {
        if(texto[i] == caractere)
        {
            return(i);
        }
        i++;
    }
    return(-1);
}
// gerar caracteres para uma string
//entre 32 e 255 (ascci)
void gerarString(char texto[], int tam)
{
    int i;
    for(i=0; i<tam-1; i++)
    {
        texto[i] = rand() % (255 - 32 + 1) +32;
    }
    texto[i] = '\0';
}

//mostrar os caracteres de uma string
void mostrarString(char texto[])
{
    int i=0;
    while(texto[i] != '\0')
    {
        printf("%c", texto[i]);
        i++;
    }
}












