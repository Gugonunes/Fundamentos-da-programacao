/*4) Ler duas notas de 5 alunos. Armazená-las em uma matriz. Encontrar a maior e a menor entre as notas armazenadas.*/
#include<stdio.h>
int main(void)
{
    float matriz[5][2];//5 linhas e 2 colunas
    int i, j;
    float maior;
    float menor;

    for(i=0; i<5; i++)//apontar para a linha
    {
        for(j=0; j<2; j++)//percorre as colunas
        {
            printf("matriz[%d][%d]", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    maior = menor = matriz[0][0];
    for(i=0; i<5; i++)//apontar para a linha
    {
        for(j=0; j<2; j++)//percorre as colunas
        {
            printf("%6.2f", matriz[i][j]);
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
            else if(matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("\n\nMaior nota: %.2f e menor nota %.2f\n", maior, menor);
}
