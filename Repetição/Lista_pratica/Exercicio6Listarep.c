/*6) Ler um n�mero e imprimir todos os pares entre 2 e o n�mero lido. Imprimir a soma
dos pares, o produto dos �mpares e divis�veis por 9 e a m�dia de todos os n�meros do
intervalo. Validar para que n�o seja realizada divis�o por zero.*/
#include<stdio.h>
int main(void)
{
    int i;
    int limite;
    int somapares=0;
    int produtoimpares9=1;
    int soma=0, qtd=0;
    float media;

    printf("Informe o limite: ");
    scanf("%d", &limite);

    for(i=2 ;i<=limite ;i++ )
    {
        if(i%2==0)
        {
            printf("%d\t", i);
            somapares = somapares +i;
        }
        else
        {
            if(i%9 ==0)
            {
                produtoimpares9 = produtoimpares9 * i;
            }
        }
        soma = soma + i;
        qtd++;
    }
    //fim do for
    printf("soma dos pares: %d\n", somapares);
    if( produtoimpares9 > 1)
    {
        printf("Produtos dos impares e divisiveis por 9: %d\n", produtoimpares9);
    }
    if(qtd > 0)
    {
        media = (float)soma / qtd;
        printf("media: %.2f\n", media);
    }


}
