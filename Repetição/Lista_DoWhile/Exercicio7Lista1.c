/*7) Faça um programa que simule o caixa de um supermercado. Ler o valor do produto e a
quantidade. Parar a leitura quando informado o valor zero ou negativo para o valor do
produto. O ser informado o valor negativo para o produto não ler a quantidade. Ao final
apresentar o valor final da compra.*/
#include<stdio.h>
int main(void)
{
    int qtd=0;
    float i, soma=0;

    do
    {
        printf("Informe o valor do produto: ");
        fflush(stdin);
        scanf("%f", &i);

        if(i>0)
        {
            printf("Informe a quantidade: ");
            fflush(stdin);
            scanf("%d", &qtd);
            soma = soma + i*qtd;
        }
    }while(i>0);
    printf("O valor total foi de:R$ %.2f", soma);
}
