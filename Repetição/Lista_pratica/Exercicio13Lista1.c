/* 13) Calcule e mostre a média de idade de três pessoas (você e mais dois colegas de
classe). */

#include <stdio.h>

int main (void)
{
    int idade1, idade2, idade3;
    float media;
    printf("Informe a idade do primeiro aluno: ");
    scanf("%d", &idade1);

    printf("Informe a idade do segundo aluno: ");
    scanf("%d", &idade2);

    printf("Informe a idade do terceiro aluno: ");
    scanf("%d", &idade3);

    media = ( idade1 + idade2 + idade3 ) /3.0;

    printf("A media das idades e: %.2f", media);


}

