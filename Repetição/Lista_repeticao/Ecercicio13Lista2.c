/*13) Apresentar os m�ltiplos de 10 entre 1000 e 0 (ordem decrescente). Mostrar os valores
separados por uma marca de tabula��o e em colunas com 8 n�meros por linha.*/
#include<stdio.h>
int main(void)
{
    int i, qtd=0;

    for(i=1000; i>=0; i--)
    {
        if(i%10==0)
        {
            printf("%d\t", i);
            qtd++;
            if(qtd%8==0)
            {
                printf("\n");
            }
        }
    }
}
