/* 8) Gerar aleatoriamente um vetor com 100 elementos que conterá somente valores 0 ou 1.
Mostrar esse vetor. Em seguida contar quantos 0s sucessivos o vetor contém, armazenar essa
quantidade em outro vetor e mostrá-lo. Qual seria o tamanho mínimo e máximo desse vetor
que armazena as quantidades? Criá-lo para a tamanho máximo possível.
Exemplo
Vetorgerado: 00010011111000
VetorQuatidades:323 (os três primeiros zeros,nos dois zeros subsequentes e os três zeros no
final) */
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
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
