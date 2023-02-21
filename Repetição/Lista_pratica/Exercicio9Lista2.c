/* Faca um algoritmo que leia o sal�rio bruto mensal de um funcion�rio, calcule e mostre
os valores conforme o modelo.
Salario Bruto : R$
(-) IR (15%) : R$
(-) INSS (11%) : R$
(-) Sindicato (3%) : R$
Salario Liquido : R$
Observa��o: � poss�vel fazer esse algoritmo utilizando somente tr�s vari�veis: uma para
para ler o sal�rio bruto, outra os descontos e outra para o sal�rio l�quido. Tente!
*/

#include <Stdio.h>

int main (void)
{
    float salariobruto, descontos, salarioliquido;

    printf("Informe o salario bruto: ");
    scanf("%f", &salariobruto);

    salarioliquido = salariobruto;

    descontos = salariobruto*15/100;
    printf("\nO desconto de IR �: R$ %.2f\n", descontos);

    descontos = salariobruto*11/100;
    printf("\nO desconto de INSS �: R$ %.2f\n", descontos);

    descontos = salariobruto*3/100;
    printf("\nO desconto de sindicado �: R$ %.2f\n", descontos);

    salarioliquido = ( salariobruto - salariobruto*15/100 - salariobruto*11/100 - salariobruto*3/100 );
    printf("\nO salario liquido �: R$ %.2f\n", salarioliquido);

}
