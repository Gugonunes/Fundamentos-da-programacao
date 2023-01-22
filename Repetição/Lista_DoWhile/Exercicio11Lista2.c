/*11) Elaborar um programa que solicita a idade e se é profissional autônomo ou
funcionário, calcula e mostra:
a) o total de pessoas profissionais autônomos com menos de 18 anos;
b) a média das idades das pessoas funcionários com mais de 18 anos.
O programa deve validar as entradas: permitir somente valores positivos para a
idade e A/a/F/f (autônomo ou funcionário) para o tipo de profissional.
O programa termina quando for informado um valor negativo para a idade, que
não deve ser considerado. Portanto, ao ser informado um valor negativo para a idade não
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

    printf("\nO total de pessoas profissionais autônomos com menos de 18 anos: %d", qtd);

    if(qtdmais!=0)
    {
        media = (float)soma / qtdmais;
        printf("\nA média das idades das pessoas funcionários com mais de 18 anos: %.2f", media);
    }
}
