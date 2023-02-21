/*1) Ler dois números reais (ponto flutuante) e apresentar, sem utilizar funções
matemáticas prontas:
a) A divisão do primeiro número pelo segundo, armazenando somente a parte
inteira do valor resultante da divisão.
b) A soma dos dois números com o resultado arredondado para o próximo número
inteiro.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h> //system()

int main (void)
{
    float num1, num2;
    int resultado1;

    printf("Informe o valor do primeiro numero: ");
    scanf("%f", &num1);

    printf("Informe o valor do segundo numero: ");
    scanf("%f", &num2);

    printf("Sem o uso de funções matematicas\n");
    resultado1 = (int)(num1 / num2);

    printf("\na)O resto da divisão de %f / %f é: %d\n", num1, num2, resultado1);
    resultado1 = num1 + num2 + 0.999999;

    printf("\nb) A soma dos dois numeros: %d\n", resultado1);


    printf("Com o uso de funçoes matematicas\n");
    resultado1 = trunc(num1/num2);
    printf("\na)A divisão de %f / %f é: %d\n", num1, num2, resultado1);

    resultado1 = ceil(num1 + num2); //arredondar paro o proximo numero inteiro;

    printf("\nb) %f + %f: %d\n", num1, num2, resultado1);

    system("pause");
    return(0);
}

