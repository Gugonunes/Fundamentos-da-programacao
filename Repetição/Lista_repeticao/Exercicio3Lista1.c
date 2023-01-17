/*3) Apresentar o quadrado dos números divisíveis por 3 e a raiz quadrada dos números
positivos e divisíveis por 5 ou por 7 entre 0 a 100. Apresentar em listagens separadas: uma
para os quadrados e outra para as raízes quadradas. Colocar um cabeçalho antes de cada
listagem de maneira a identificar o conteúdo da mesma. Em cada listagem separar os números
por uma tabulação. A raiz quadrada pode ser obtida pela função sqrt () que está na biblioteca
<math.h>*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i;
    int quadrado;
    float raiz;

    printf("Tabela de numeros quadrados divisiveis por 3:\n\n");
    for(i=0;i<=100;i++)
    {
        if(i%3==0)
        {
            quadrado=i*i;
            printf("%d\t", quadrado);
        }
    }
    printf("\n\n\n\n");
    printf("Tabela de raizes de divisiveis por 5 ou 7:\n\n");

    for(i=0;i<=100;i++)
    {
        if((i%5==0) || (i%7==0))
        {
            raiz = sqrt (i);
            printf("%f\t", raiz);
        }
    }
    printf("\n\n");
}
