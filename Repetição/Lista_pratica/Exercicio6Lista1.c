/*6) Calcular o sal�rio l�quido de uma pessoa. Sobre o sal�rio bruto incidem descontos de
de imposto de renda e de INSS. Os descontos s�o informados em percentual.*/

#include <stdio.h>

int main (void)
{
    float salarioBruto, salarioLiquido, INSS, IR;

    printf("Informe o valor do sal�rio bruto: ");
    scanf ("%f", &salarioBruto);

    printf("Percentual de IR (ex. 27.5 para 27.5%%): ");
    scanf ("%f", &IR);

    printf("Percentual de INSS (ex. 27.5 para 27.5%%): ");
    scanf("%f", &INSS);

    salarioLiquido = salarioBruto - (salarioBruto*IR/100) - (salarioBruto*INSS/100);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);
}
