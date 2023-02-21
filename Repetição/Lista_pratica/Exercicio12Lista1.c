/* O que faz o algoritmo a seguir? Implemente-o utilizando a linguagem C*/
/* inicio - salario atual - percentual reajuste - valor reajuste - salario reajustado - fim*/
#include <stdio.h>

int main (void)
{
    float salario, reajuste, valorreajuste, salarioreajustado;

    printf("Informe o salario atual: ");
    scanf("%f", &salario);

    printf("Informe o valor do reajuste (5 para 5%%): ");
    scanf("%f", &reajuste);

    valorreajuste = (salario * reajuste/100);
    salarioreajustado = (salario + valorreajuste);

    printf("O valor do reajuste é: %.2f\n", valorreajuste);
    printf("O valor do salario reajustado é: %.2f\n", salarioreajustado);


}

