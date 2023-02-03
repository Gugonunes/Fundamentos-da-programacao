/*2) Ler dois n�meros positivos que representam os limites inferior e superior de um intervalo. Validar a entrada para que sejam informados n�meros positivos. � mais adequado valid�-los separadamente. Fazer a m�dia dos m�ltiplos de 3 e de 5 desse intervalo. Verificar para que no c�lculo da m�dia n�o seja feita divis�o por zero.*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char repetir;
    int liminf, limsup;
    int soma;
    int qtd;
    int i;
    float media;

    do
    {

        system("cls");
        soma = 0;
        qtd = 0;
        //
        do
        {
            printf("Limite inferior (positivo): ");
            scanf("%d", &liminf);
        }while(liminf < 0);
        do
        {
            printf("Limite superior (positivo): ");
            scanf("%d", &limsup);
        }while(limsup < 0);

        if(liminf > limsup)
        {
            i = liminf;
            liminf = limsup;
            limsup = i;
        }
        for(i = liminf; i<=limsup; i++)
        {
            if(i%3==0 && i%5==0)
            {
                printf("%d\t", i);
                soma = soma + i;
                qtd++;
            }
        }

        if(qtd!=0)
        {
            media = (float)soma / qtd;
            printf("\nMedia: %.2f\n", media);
        }


        printf("\n\n\nRepetir o programa? (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir == 's' || repetir =='S');
    system("pause");
    return(0);
}
