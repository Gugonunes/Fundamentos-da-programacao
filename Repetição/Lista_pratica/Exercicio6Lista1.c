/*6) Calcular o salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de
de imposto de renda e de INSS. Os descontos são informados em percentual.*/

#include <stdio.h>

int main (void)
{
    float salarioBruto, salarioLiquido, INSS, IR;

    printf("Informe o valor do salário bruto: ");
    scanf ("%f", &salarioBruto);

    printf("Percentual de IR (ex. 27.5 para 27.5%%): ");
    scanf ("%f", &IR);

    printf("Percentual de INSS (ex. 27.5 para 27.5%%): ");
    scanf("%f", &INSS);

    salarioLiquido = salarioBruto - (salarioBruto*IR/100) - (salarioBruto*INSS/100);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);
}
