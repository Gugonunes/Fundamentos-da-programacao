/*8) Fazer um programa que faça o levantamento dos candidatos que se inscreveram para
vagas em uma empresa. Considerando que para cada candidato a empresa tenha obtido as
seguintes informações:
. idade
. nacionalidade (B ou E)
. possui curso superior (S ou N)
Faça um programa para determinar:
a) a quantidade de brasileiros;
b) a quantidade de estrangeiros;
c) a idade média dos brasileiros sem curso superior;
d) a menor idade entre os estrangeiros com curso superior;
Estabelecer uma condição para finalizar a entrada de dados do programa. Por
exemplo, idade negativa. Se idade negativa não ler as informações de nacionalidade e se
possui curso superior.*/
#include<stdio.h>
int main(void)
{
    int idade;
    char cursoSuperior;
    char nacionalidade;
    int totalbr=0, totalest=0;
    int qtd=0;
    int soma=0;
    float media;
    int menoridade=200;

    do
    {
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade >=0)
        {
            printf("Possui curso superior?(s/S ou n/N): ");
            fflush(stdin);
            scanf("%c", &cursoSuperior);

            printf("Brasileiro?(s/S ou n/N): ");
            fflush(stdin);
            scanf("%c", &nacionalidade);

            if(nacionalidade == 's' || nacionalidade == 'S')
            {
                totalbr++;
                if( cursoSuperior =='n' || cursoSuperior == 'N')
                {
                    qtd++;
                    soma = soma+idade;
                }
            }
            else
            {
                totalest++;
                if( cursoSuperior == 's' || cursoSuperior == 'S')
                {
                    if(idade< menoridade)
                    {
                        menoridade = idade;
                    }
                }
            }

        }


    }while(idade>=0);

    printf("\nSao %d brasileiros e %d estrangeiros", totalbr, totalest);
    if( menoridade !=200)
    {
        printf("\n menor idade de estrangeiro com curso superior %d\n", menoridade);
    }

    if( qtd>0)
    {
        media = (float)soma/qtd;
        printf("\nMedia de idade %.2f\n", media);
    }

}
