/*6) O que faz o algoritmo a seguir?
declare i como inteiro
repetir i = 0 at� i < 10 passo 2
escreva �o valor i = �, i
fim-repetir
Implemente esse algoritmo utilizando a linguagem C.*/
#include<stdio.h>
int main (void)
{
    int i;

    for(i=0;i<10;i=i+2)
    {
        printf("\no valor de i: %d\n", i);
    }
}
