/* 8) Gerar aleatoriamente um vetor com 100 elementos que conter� somente valores 0 ou 1.
Mostrar esse vetor. Em seguida contar quantos 0s sucessivos o vetor cont�m, armazenar essa
quantidade em outro vetor e mostr�-lo. Qual seria o tamanho m�nimo e m�ximo desse vetor
que armazena as quantidades? Cri�-lo para a tamanho m�ximo poss�vel.
Exemplo
Vetorgerado: 00010011111000
VetorQuatidades:323 (os tr�s primeiros zeros,nos dois zeros subsequentes e os tr�s zeros no
final) */
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vetores.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int vet[100];
    int qtd;
    int qtdzeros;
    int i;
    int vetqtd[100];

    do
    {
        system("cls");
        //
        qtd = 0;
        qtdzeros = 0;
        gerarVetorIntIntervalo(vet, 100, 0, 1);
        mostrarVetorInt(vet, 100);

        for(i=0; i<100; i++)
        {
            if(vet[i] == 0)
            {
                qtdzeros++;
                if(vet[i+1] !=0 && i!=99)
                {
                    vetqtd[qtd] = qtdzeros;
                    qtdzeros = 0;
                    qtd++;
                }
                if(i == 99 && vet[i] == 0)
                {
                   vetqtd[qtd] = qtdzeros;
                   qtdzeros = 0;
                   qtd++;
                }

            }
        }

        printf("\n\nVetor quantidade: ");
        mostrarVetorInt(vetqtd, qtd);


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
