/*7) Elaborar um algoritmo para ler dois valores, verificar se o primeiro � m�ltiplo do
segundo. Escrever a mensagem �S�o m�ltiplos� ou �N�o s�o m�ltiplos�, dependendo da
condi��o. Verificar para que n�o seja realizada divis�o por zero. Nesse caso, informar
que n�o � poss�vel realizar divis�o por zero. */
#include <stdio.h>
int main (void)
{
    int num1, num2;

    printf("Informe um numero: ");
    scanf("%d", &num1);

    printf("Informe outro numero: ");
    scanf("%d", &num2);

    if(num2 != 0) //podemos processar
    {
        if(num1 % num2 ==0)
        {
            printf("%d � multiplo de %d\n", num1, num2);
        }
    }
    else
    {
        printf("Nao � possivel realizar divisao por zero");
    }
}
