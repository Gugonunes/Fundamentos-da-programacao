/*2) Ler dois n�meros inteiros e informar:
a) Se ambos s�o divis�veis por 5.
b) Se pelo menos um deles � divis�vel por 5.
c) Se ambos s�o pares.
d) Se pelo menos um deles � �mpar.
Esses quatro itens podem ser realizados utilizando uma �nica estrutura if else if
encadeada? Por qu�?*/
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
        printf("Apenas um � divisivel por 5\n");
    }
    else
    {
        printf("nenhum � divisivel por 5n");
    }

    if(num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("Ambos s�o pares\n");
    }
    else if(num1 % 2 == 0 || num2 % 2 == 0)
    {
        printf("Um � par e outro impar\n");
    }
    else
    {
        printf("Ambos s�o impares\n");
    }
}

