/*8) O que faz o algoritmo a seguir?
declare i , s como inteiro
s ← 1
repetir i = 0 até i < 5 passo 1
s ← s * i
fim-repetir
escreva s
Defina o valor de I e S para cada iteração da estrutura de repetição*/
#include<stdio.h>
int main(void)
{
    int i,s=1;

    for(i=1;i<5; i++)
    {
        s=s*i;
        printf("o valor de i: %d \t o valor de s: %d\n", i,s);
    }
}
