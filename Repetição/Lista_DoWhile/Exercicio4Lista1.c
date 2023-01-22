/*4) Ler números informados pelo usuário. Parar a leitura quando informado o número
zero que não deve ser considerado. Fazer a média dos valores negativos informados. Dos
valores positivos contar quantos são ímpares.*/
#include<stdio.h>
int main(void)
{
    int i, soma=0, qtd=0;
    float media;

    do
    {
        printf("Informe um numero: ");
        fflush(stdin);
        scanf("%d", &i);
        if(i!=0)
        {
            if(i<0)
            {
                qtd++;
                soma = soma + i;
            }
        }
    }while(i!=0);

    if(qtd!=0)
    {
        media = soma/(float)qtd;
        printf("Media: %.2f", media);
    }
}
