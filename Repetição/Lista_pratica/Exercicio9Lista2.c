/* Faca um algoritmo que leia o salário bruto mensal de um funcionário, calcule e mostre
os valores conforme o modelo.
Salario Bruto : R$
(-) IR (15%) : R$
(-) INSS (11%) : R$
(-) Sindicato (3%) : R$
Salario Liquido : R$
Observação: é possível fazer esse algoritmo utilizando somente três variáveis: uma para
para ler o salário bruto, outra os descontos e outra para o salário líquido. Tente!
*/

#include <Stdio.h>

int main (void)
{
    float salariobruto, descontos, salarioliquido;

    printf("Informe o salario bruto: ");
    scanf("%f", &salariobruto);

    salarioliquido = salariobruto;

    descontos = salariobruto*15/100;
    printf("\nO desconto de IR é: R$ %.2f\n", descontos);

    descontos = salariobruto*11/100;
    printf("\nO desconto de INSS é: R$ %.2f\n", descontos);

    descontos = salariobruto*3/100;
    printf("\nO desconto de sindicado é: R$ %.2f\n", descontos);

    salarioliquido = ( salariobruto - salariobruto*15/100 - salariobruto*11/100 - salariobruto*3/100 );
    printf("\nO salario liquido é: R$ %.2f\n", salarioliquido);

}
