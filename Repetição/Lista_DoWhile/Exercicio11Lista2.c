/*11) Elaborar um programa que solicita a idade e se � profissional aut�nomo ou
funcion�rio, calcula e mostra:
a) o total de pessoas profissionais aut�nomos com menos de 18 anos;
b) a m�dia das idades das pessoas funcion�rios com mais de 18 anos.
O programa deve validar as entradas: permitir somente valores positivos para a
idade e A/a/F/f (aut�nomo ou funcion�rio) para o tipo de profissional.
O programa termina quando for informado um valor negativo para a idade, que
n�o deve ser considerado. Portanto, ao ser informado um valor negativo para a idade n�o
deve ser solicitado o tipo de profissional.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int idade;
    char profissional;
    int qtd=0;
    int soma=0;
    int qtdmais=0;
    float media;

    do
    {
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade>0)
        {
            printf("Profissional autonomo ou funcionario? (A ou a p/ Autonomo e F ou f para funcionario): ");
            fflush(stdin);
            scanf("%c", &profissional);

            if(idade<18 && (profissional == 'a' || profissional == 'A'))
            {
                qtd++;
            }
            if((profissional == 'f' || profissional =='F') && idade>18)
            {
                qtdmais++;
                soma = soma + idade;
            }
        }
    }while(idade>0);

    printf("\nO total de pessoas profissionais aut�nomos com menos de 18 anos: %d", qtd);

    if(qtdmais!=0)
    {
        media = (float)soma / qtdmais;
        printf("\nA m�dia das idades das pessoas funcion�rios com mais de 18 anos: %.2f", media);
    }
}
