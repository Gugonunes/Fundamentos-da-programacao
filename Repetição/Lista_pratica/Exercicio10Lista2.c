/*10) Leia dos valores inteiros, faça a divisão deles armazenando em uma variável a parte
inteira, em outra a parte decimal dessa divisão e em uma terceira variável a parte decimal,
mas como um inteiro de dois dígitos. Declare as variáveis do tipo adequado.
Exemplo:
Informados: 7 e 6
Apresentados:
parte inteira de 7 / 6 : 1
parte decimal de 7 / 6 : 0.166666
parte decimal de 7 / 6 como inteiro de dois dígitos: 16*/

#include <stdio.h>

int main (void)
{
    int num1, num2;
    int inteira, decimalint;
    float decimal;

    printf("Informe o numero 1: ");
    scanf("%d", &num1);

    printf("Informe o numero 2: ");
    scanf("%d", &num2);

    inteira = num1 / num2;
    decimal = (((float)num1/num2) - inteira);
    decimalint = decimal * 100;



    printf("\nParte inteira de %d / %d: %d\n", num1, num2, inteira);
    printf("\nParte decimal de %d / %d: %f\n", num1, num2, decimal);
    printf("\nParte decimal como int de %d / %d: %d\n", num1, num2, decimalint);
}
