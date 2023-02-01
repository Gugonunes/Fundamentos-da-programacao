/*Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
*Al�quota � o percentual para realizar o c�lculo do imposto a ser pago.
**Dedu��o � o valor deduzido ap�s calculado o valor com base na al�quota.
Se informado valor negativo n�o realizar o c�lculo e informar o usu�rio.*/
#include<stdio.h>
int main (void)
{
    float renda, aliquota, deducao;

    printf("Informe a renda: ");
    scanf("%f", &renda);

    if( renda < 0)
    {
        printf("Valor informado n�o � valido.");
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
        printf("Aliquota para a renda %.2f �: %.2f\n", renda, aliquota);
        printf("A renda final �: %.2f", deducao);
    }
    else
    {
       aliquota = renda * 25/100;
       deducao = renda - aliquota;
       printf("Aliquota para a renda %.2f �: %.2f\n", renda, aliquota);
       printf("A renda final �: %.2f", deducao);
    }

}
