/*4) Ler n�meros informados pelo usu�rio. Parar a leitura quando informado o n�mero
zero que n�o deve ser considerado. Fazer a m�dia dos valores negativos informados. Dos
valores positivos contar quantos s�o �mpares.*/
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
