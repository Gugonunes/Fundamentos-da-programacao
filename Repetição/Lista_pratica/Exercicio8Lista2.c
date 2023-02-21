/*8) Escrever um algoritmo que o leia o número de horas trabalhadas, o valor por hora, o
número de filhos com idade menor do que 14 anos, o valor do salário família por filho e
calcula o salário desse funcionário. */

#include <stdio.h>

int main (void)
{
    int horas, filhos;
    float valorphora, salarioporfilho, salariofinal;

    printf("Informe o numero de horas trabalhadas por mes: ");
    scanf("%d", &horas);

    printf("Informe o numero de filhos menores que 14 anos: ");
    scanf("%d", &filhos);

    printf("Informe o valor por hora trabalhada (ex: 4 para 4 reais por hora): ");
    scanf("%f", &valorphora);

    printf ("Informe o salario por filho: ");
    scanf("%f", &salarioporfilho);

    salariofinal = (horas*valorphora) + (filhos * salarioporfilho);

    printf("\nO salario desse funcionario é:R$ %.3f\n", salariofinal);
}
