/*7) Elaborar um algoritmo para ler dois valores, verificar se o primeiro é múltiplo do
segundo. Escrever a mensagem ‘São múltiplos’ ou ‘Não são múltiplos’, dependendo da
condição. Verificar para que não seja realizada divisão por zero. Nesse caso, informar
que não é possível realizar divisão por zero. */
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
            printf("%d é multiplo de %d\n", num1, num2);
        }
    }
    else
    {
        printf("Nao é possivel realizar divisao por zero");
    }
}
