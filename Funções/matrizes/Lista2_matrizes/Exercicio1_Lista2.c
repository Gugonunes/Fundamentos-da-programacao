/*1) Gerar uma matriz de 5x5 com números aleatórios entre 10 e 100, mostrar essa matriz. Somar a
diagonal principal e a secundária. Mostrar a matriz e essas somas.
2) Gerar uma matriz 5 X 5 com números randômicos, no intervalo de 1 a 100. Em seguida criar dois
vetores que contenham, respectivamente, as somas das linhas e das colunas da matriz. Mostrar os
vetores criados.*/
#include<stdio.h>

int main(void)
{
    int i, j;
    int matriz[5][5];
    int somaDP=0;
    int somaDS=0;
    int somaLinhas[5]={0};
    int somaColunas[5]={0};

    for(i=0; i<5; i++)//apontar para a linha
    {
        for(j=0; j<5; j++)//percorre coluna de cada linha
        {
            matriz[i][j] = rand() % (100 - 10 + 1) + 10;//(lim superior - inferior + 1) + lim inf
            printf("%d\t", matriz[i][j]);

            if(i==j)
            {
                somaDP = somaDP + matriz[i][j];
            }
            if((i+j) == 4)//tomanho da matriz -1, ultimo indice
            {
                somaDS = somaDS + matriz[i][j];
            }
            somaLinhas[i] = somaLinhas[i] + matriz[i][j];
            somaColunas[j] = somaColunas[j] + matriz[i][j];
        }
        printf("\n");
    }
    printf("\n\nSoma da diagonal principal: %d\n", somaDP);
    printf("\n\nSoma da diagonal secundaria: %d\n", somaDS);
    printf("\nSoma das linhas:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\t", somaLinhas[i]);
    }
    printf("\nSoma das colunas:\n");
    for(i=0; i<5; i++)
    {
        printf("%d\t", somaColunas[i]);
    }

}
