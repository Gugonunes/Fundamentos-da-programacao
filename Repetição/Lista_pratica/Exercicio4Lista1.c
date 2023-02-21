/*4) Um professor atribui pesos de 1, 3 e 5, respectivamente, para as notas de três
avaliações. Faça um algoritmo que calcule a média ponderada. A média será um valor
float e as notas valores inteiros.*/

#include <stdio.h>;

int main (void)
{
    //declarar variaveis
    int nota1, nota2, nota3;
    float media;

    //entrada de dados
    printf("INFORME APENAS VALORES INTEIROS \n");
    printf("Informe a nota na primeira prova: ");
    scanf("%d", &nota1);
    printf("Informe a nota na segunda prova: ");
    scanf("%d", &nota2);
    printf("Informe a nota na terceira prova: ");
    scanf("%d", &nota3);

    //processamento

    media = ((float)nota1 + nota2 * 3 + nota3 * 5) / 9.0;

    //saida
    printf("Media ponderada final: %.1f\n", media);

}
