/*8) Faça um algoritmo que leia três notas de um aluno e calcule a média ponderada, com
os pesos: 1, 3 e 4, respectivamente. E:
a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;
b) Se a média obtida está entre 4 e 5.9 informar que o aluno está em recuperação. Nesse
caso, ler a nota de recuperação e calcular a média final (que é a média entre a média
anual e a nota de recuperação).
b.1) Se a média final é menor que 5 informar que o aluno está reprovado após
recuperação;
b.2) Se é igual ou maior que 5 informar que o aluno está aprovado após
recuperação;
c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da
recuperação.*/
#include <Stdio.h>

int main (void)
{
    float nota1, nota2, nota3;
    float media;
    float notarecuperacao;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2*3 + nota3*4)/8;

    if(media >= 6 && media <=10)
    {
        printf("Aprovado \n");
    }
    else if (media >= 4 && media <6)
    {
        printf("Em recuperação\n");
        printf("Informe a nota de recuperação: ");
        scanf("%f", &notarecuperacao);
        media = (media + notarecuperacao) /2;
        if(media >= 5)
        {
            printf("Aprovado após recuperação\n");
        }
        else
        {
            printf("Reprovado após recuperação\n");
        }

    }
    else
    {
        printf("Reprovado\n");
    }
}
