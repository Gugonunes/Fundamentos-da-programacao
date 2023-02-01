/*Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
*Alíquota é o percentual para realizar o cálculo do imposto a ser pago.
**Dedução é o valor deduzido após calculado o valor com base na alíquota.
Se informado valor negativo não realizar o cálculo e informar o usuário.*/
#include<stdio.h>
int main (void)
{
    float renda, aliquota, deducao;

    printf("Informe a renda: ");
    scanf("%f", &renda);

    if( renda < 0)
    {
        printf("Valor informado não é valido.");
        return(0);
    }

    if( renda < 10000)
    {
        printf("Isento");
    }
    else if ( renda >10000 && renda <=25000)
    {
        aliquota = renda * 1/10;
        deducao = renda - aliquota;
        printf("Aliquota para a renda %.2f é: %.2f\n", renda, aliquota);
        printf("A renda final é: %.2f", deducao);
    }
    else
    {
       aliquota = renda * 25/100;
       deducao = renda - aliquota;
       printf("Aliquota para a renda %.2f é: %.2f\n", renda, aliquota);
       printf("A renda final é: %.2f", deducao);
    }

}
