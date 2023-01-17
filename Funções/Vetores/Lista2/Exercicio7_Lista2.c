/* 7) Em uma determinada cidade, sabe-se que, de janeiro a abril de um determinado ano (121
dias), a temperatura ficou entre a 5° e 45°. Gerar um vetor com valores randômicos nesse
intervalo para esse período de tempo. Fazer uma função para gerar vetores de tamanho e com
dentro de limites informados. A partir do vetor gerado, obtenha e mostre:
a) a menor temperatura ocorrida;
b) a maior temperatura ocorrida;
c) a temperatura média;
d) o número de dias em que a temperatura foi inferior à temperatura média.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int vet[121];
    int menor;
    int maior;
    int soma;
    float media;
    int qtddias;
    int i;

    do
    {
        system("cls");
        //
        menor = 50;
        maior = 0;
        soma = 0;
        qtddias=0;

        gerarVetorIntIntervalo(vet, 121, 5, 45);
        mostrarVetorInt(vet, 121);

        for(i=0; i<121; i++)
        {
            soma = soma + vet[i];
            if(vet[i]<menor)
            {
                menor = vet[i];
            }
            else if(vet[i]>maior)
            {
                maior = vet[i];
            }
        }
        media = (float)soma / 121;

        for(i=0; i<121; i++)
        {
            if(vet[i] < media)
            {
                qtddias++;
            }
        }
        printf("\nMenor temperatura ocorrida: %d", menor);
        printf("\nMaior temperatura ocorrida: %d", maior);
        printf("\nMedia de temperaturas: %.2f", media);
        printf("\nNumero de dias que a temperatura foi menor que a media: %d", qtddias);


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
