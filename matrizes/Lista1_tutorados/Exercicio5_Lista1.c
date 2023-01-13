/*5) Ler o nome de 5 pessoas e armazená-los em uma matriz. Mostrar os nomes armazenados que iniciam com vogal e em seguida os nomes nos índices ímpares.*/
#include<stdio.h>
int main(void)
{
    char nomes[5][53];
    int i, j;
    char primeirappalavra[5][53];

    for(i=0; i<5; i++)
    {
        printf("Informe um nome: ");
        gets(nomes[i]);
        j=0;
        while(nomes[i][j] == ' ')
        {
            j++;
        }
        while(nomes[i][j]!= ' ' && nomes[i][j] !='\0')
        {
            primeirappalavra[i][j] = nomes[i][j];
            j++;
        }
        primeirappalavra[i][j] = '\0';
    }
    printf("\nPrimeira palavra\n");
    for(i=0; i<5; i++)
    {
        //printf("%s\n", primeirappalavra[i]);
        j=0;
        while(primeirappalavra[i][j] != '\0')
        {
            printf("%c", primeirappalavra[i][j]);
            j++;
        }
        printf("\n");
    }
}
