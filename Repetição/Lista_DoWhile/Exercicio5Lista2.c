/*5) Escreva um programa que determine a soma dos n primeiros termos (informado pelo
usuário) que inicia com 500 e se necessário vai para números negativos.
S = 2/500 - 5/450 + 2/400 - 5/350...*/
#include<stdio.h>
int main(void)
{
    int i, termos, aux=500;
    float soma=0;

    printf("Informe o numero de termos: ");
    scanf("%d", &termos);

    for(i=1; i<=termos; i++)
    {
        if(aux!=0)
        {
            if(i%2!=0 && i!=termos)
            {
                soma = soma + (float)2/aux;
                printf("2/%d - ", aux);
            }
            else if (i%2==0 && i!=termos)
            {
                soma = soma - (float)5/aux;
                printf("5/%d +", aux);
            }
            else if(i==termos)
            {
                if(i%2==0)
                {
                    soma = soma - (float)5/aux;
                    printf("5/%d", aux);
                }
                else
                {
                    soma = soma + (float)2/aux;
                    printf("2/%d", aux);
                }
            }
        }
        aux = aux-50;
    }
    printf("\nSoma= %f", soma);
}
