/*8) Ler um n�mero e utilizando uma estrutura if else if else if... (obrigatoriamente
encadeada) informar se ele �:
a) divis�vel somente por 5, por 3 ou por 2;
Exemplo: 25 divis�vel somente por 5
b) n�o � divis�vel por nenhum destes;
Exemplo: 7 n�o � divis�vel por 5, 3 ou 2;
c) se � divis�vel por todos eles;
Exemplo: 30 � divis�vel por 2, 3 e 5.
d) se ele � divis�vel somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;*/
#include<stdio.h>
int main (void)
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num % 5 ==0)
    {
        printf("%d � divisivel por 5\n", num);
    }
    else if(num % 3 ==0)
    {
        printf("%d � divisivel por 3\n", num);
    }
    else if(num % 2 ==0)
    {
        printf("%d � divisivel por 2\n", num);
    }
    else
    {
        printf("%d nao � divisivel por 5, 3 ou 2\n", num);
    }

    if((num % 5 ==0) && (num % 3 ==0) && (num % 2 ==0))
    {
        printf("%d � divisil por 5, 3 e 2", num);
    }
    // se ele � divis�vel somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
    if ((num % 5 == 0) && (num % 3 ==0))
    {
        printf("%d � divisivel por 5 e por 3", num);
    }
    else if((num % 5 == 0) && (num % 2 ==0))
    {
        printf("%d � divisivel por 5 e por 2", num);
    }
    else
    {
        printf("%d � divisivel por 3 e por 2", num);
    }

}
