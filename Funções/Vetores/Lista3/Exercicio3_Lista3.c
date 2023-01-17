/*3) Gerar um vetor com cinco números aleatórios no intervalo entre 10 e 20, inclusive. Para cada
número exibir a sequência dos pares de 2 até o número gerado e a soma desses pares.
Deve ser utilizado uma função uma para mostrar pares e outra função que retorna a quantidade de pares.
Mostrar como na figura ao lado.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
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
