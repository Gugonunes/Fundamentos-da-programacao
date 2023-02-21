/*1) Ler dois n�meros reais (ponto flutuante) e apresentar, sem utilizar fun��es
matem�ticas prontas:
a) A divis�o do primeiro n�mero pelo segundo, armazenando somente a parte
inteira do valor resultante da divis�o.
b) A soma dos dois n�meros com o resultado arredondado para o pr�ximo n�mero
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

    printf("Sem o uso de fun��es matematicas\n");
    resultado1 = (int)(num1 / num2);

    printf("\na)O resto da divis�o de %f / %f �: %d\n", num1, num2, resultado1);
    resultado1 = num1 + num2 + 0.999999;

    printf("\nb) A soma dos dois numeros: %d\n", resultado1);


    printf("Com o uso de fun�oes matematicas\n");
    resultado1 = trunc(num1/num2);
    printf("\na)A divis�o de %f / %f �: %d\n", num1, num2, resultado1);

    resultado1 = ceil(num1 + num2); //arredondar paro o proximo numero inteiro;

    printf("\nb) %f + %f: %d\n", num1, num2, resultado1);

    system("pause");
    return(0);
}

