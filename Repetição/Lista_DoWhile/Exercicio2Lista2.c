/*2) Elaborar um programa que efetue a leitura de valores positivos inteiros at� que um
valor negativo seja informado. Ao final devem ser apresentados o maior e o menor valor
informados pelo usu�rio. O valor negativo, a condi��o de sa�da, n�o deve ser considerado
nas compara��es para localizar o maior e o menor.*/
#include<stdio.h>
int main(void)
{
    int i, maior, menor;
    char primeiro = 's';

    do
    {
        printf("Informe um numero positivo e inteiro: ");
        fflush(stdin);
        scanf("%d", &i);

        if(i>=0)
        {
            if(primeiro == 's')
            {
                maior = i;
                menor = i;
                primeiro = 'j';
            }
            else
            {
                if(i>maior)
                {
                    maior = i;
                }
                else if(i<menor)
                {
                    menor = i;
                }
            }
        }

    }while(i>=0);
    printf("\nMaior: %d\nMenor: %d", maior, menor);
}
