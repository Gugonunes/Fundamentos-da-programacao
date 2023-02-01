/*6) Um hotel cobra R$ 210,00 por diária mais uma taxa de serviços de acordo com:
R$ 10,50 por diária, se o número de diárias for maior que 15;
R$ 16,00 por diária, se o número de diárias for igual a 15;
R$ 18,00 por diária, se o número de diárias for menor que 15.
Elaborar um programa para determinar o valor a ser pago pelo cliente. Se
informado zero ou valor negativo para a quantidade de diárias não realizar o cálculo.*/
#include<stdio.h>
int main (void)
{
    int diarias;
    float valor;

    printf("Informe o numero de diarias: ");
    scanf("%d", &diarias);

    if( diarias <= 0 )
    {
        printf("Valor nao valido");
        return(0);
    }
    else if(diarias > 15)
    {
        valor = diarias*210 + diarias*10.50;
        printf("O valor a ser pago é de: %.2f", valor);
    }
    else if(diarias == 15)
    {
        valor = diarias*210 + diarias*16.00;
        printf("O valor a ser pago é de: %.2f", valor);
    }
    else
    {
        valor = diarias*210 + diarias*18.00;
        printf("O valor a ser pago é de: %.2f", valor);
    }

}
