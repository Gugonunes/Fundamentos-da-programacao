/*2) Ler dois números inteiros e informar:
a) Se ambos são divisíveis por 5.
b) Se pelo menos um deles é divisível por 5.
c) Se ambos são pares.
d) Se pelo menos um deles é ímpar.
Esses quatro itens podem ser realizados utilizando uma única estrutura if else if
encadeada? Por quê?*/
#include <stdio.h>
int main (void)
{
    int num1, num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    if(num1 % 5 == 0 && num2 % 5 == 0)
    {
        printf("Ambos sao divisivies por 5\n");
    }
    else if(num1 % 5 == 0 || num2 % 5 == 0)
    {
        printf("Apenas um é divisivel por 5\n");
    }
    else
    {
        printf("nenhum é divisivel por 5n");
    }

    if(num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("Ambos são pares\n");
    }
    else if(num1 % 2 == 0 || num2 % 2 == 0)
    {
        printf("Um é par e outro impar\n");
    }
    else
    {
        printf("Ambos são impares\n");
    }
}

