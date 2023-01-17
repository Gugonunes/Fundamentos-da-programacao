/*7) Ler 10 número e contar desses quantos são pares, quantos são ímpares e quantos são
divisíveis por 7 ou por sete. Apresentar essas quantidades.*/
#include<stdio.h>
int main(void)
{
    int i, num, qtdpar=0, qtdimpar=0, qtd7=0;

    for(i=10; i>=0; i--)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num%2==0)
        {
            qtdpar++;
        }
        else if(num%2!=0)
        {
            qtdimpar++;
        }
        if(num%7==0)
        {
            qtd7++;
        }
    }
    printf("\n %d pares\n %d impares\n %d divisiveis por 7", qtdpar, qtdimpar, qtd7);
}
