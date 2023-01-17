/*4) Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento
mensal obtido por esta aplicação e o período do investimento; e retorne o valor da
aplicação ao final do período de investimento. Obs.: a cada 12 meses o percentual de
rendimento deve ser aumentado em 0,25%.*/
#include<stdio.h>
#include<stdio.h>
int main(void)
{
    char repetir;
    int periodo, i, meses;
    float rendimento, aplicacao;

    do
    {
        system("cls");
        //
        meses=0;
        do
        {
            printf("Informe o valor da aplicação: ");
            scanf("%f", &aplicacao);
        }while(aplicacao<=0);
        do
        {
            printf("Informe o percentual de rendimento(5 para 5%): ");
            scanf("%f", &rendimento);
        }while(rendimento<=0);
        do
        {
            printf("Informe o periodo (em meses): ");
            scanf("%d", &periodo);
        }while(periodo<=0);

        while(meses<periodo)
        {
            aplicacao = aplicacao + aplicacao*rendimento/100;
            meses++;
            if(meses%12==0)
            {
                rendimento = rendimento + 0.25;
            }
        }
        printf("\n Valor final: %.2f", aplicacao);


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir == 's' || repetir =='S');
    system("pause");
    return(0);
}
