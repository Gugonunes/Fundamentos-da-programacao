/*2) Ler a idade, o tipo (E estudante e P professor) de cinco pessoas. Se o tipo for professor
solicitar o salário. Fazer a média dos salários informados. Se o tipo for estudante solicitar se o
mesmo recebe mesada. Contar quantos recebem e quantos não recebem mesada. Garantir que
o usuário informe uma idade válida, ou seja, positiva, que o tipo seja E ou P e que recebe
mesada seja S ou N. Validar essas entradas. Isso no sentido de ficar solicitando essas entradas
até que sejam válidas. Validar para que não seja realizada uma divisão por zero.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int idade;
    char tipoEP;
    float media;
    float soma;
    int qtd, qtdmesada, qtdsalario, qtdnao;
    float salario;
    char mesada;

    do
    {
        system("cls");
        //
        qtd=0;
        soma=0;
        qtdmesada=0;
        qtdsalario=0;
        qtdnao=0;

        do
        {

            do
            {
                printf("Informe a idade: ");
                scanf("%d", &idade);

                if(idade>0)
                {
                    do
                    {

                        printf("Informe o tipo(E para estudante/ P para professor): ");
                        fflush(stdin);
                        scanf("%c", &tipoEP);
                    }while(tipoEP!='E' && tipoEP!='P');
                }

            }while(idade<0);

            if(tipoEP=='P')
            {
                printf("Informe o salário: ");
                scanf("%f", &salario);
                qtdsalario++;
                soma = soma + salario;
            }
            else
            {
                do
                {

                    printf("Recebe mesada? (S para sim e N para nao): ");
                    fflush(stdin);
                    scanf("%c", &mesada);
                    if(mesada =='S')
                    {
                        qtdmesada++;
                    }
                    else
                    {
                        qtdnao++;
                    }
                }while(mesada !='S' && mesada !='N');
            }
            qtd++;
            if(qtd<5)
            {
                printf("\nProxima pessoa\n");
            }
        }while(qtd<5);

        printf("\n\nAlunos que recebem mesada: %d\n\nAlunos que nao recebem mesada: %d", qtdmesada, qtdnao);

        if(qtdsalario!=0)
        {
            media = soma/qtdsalario;
            printf("\n\nMedia dos salarios dos professores: %.2f", media);
        }



        printf("\nExecutar novamente?");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir == 's' || repetir == 'S');
    system("pause");
    return(0);
}
