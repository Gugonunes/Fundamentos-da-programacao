/*3) Gerar um vetor com cinco n�meros aleat�rios no intervalo entre 10 e 20, inclusive. Para cada
n�mero exibir a sequ�ncia dos pares de 2 at� o n�mero gerado e a soma desses pares.
Deve ser utilizado uma fun��o uma para mostrar pares e outra fun��o que retorna a quantidade de pares.
Mostrar como na figura ao lado.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vetores.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int vet[5];
    int i;

    do
    {
        system("cls");
        //
        gerarVetorIntIntervalo(vet, 5, 10, 20);

        for(i=0; i<5; i++)
        {
            printf("%d --> ", vet[i]);
            mostrapares(vet[i]);
            printf(" -->Soma= %d\n", somadospares(vet[i]));
        }


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
