/*1) Ler um n�mero positivo. Repetir a leitura at� que seja informado um n�mero que atende essa condi��o
(validar a entrada). Esse n�mero representa a quantidade de primos a serem mostrados. Fazer a M�dia dos
n�meros primos mostrados. Validar para que n�o  seja realizada divis�o por zero.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int qtdPrimosMostrar;
    int qtdJaMostrados;
    int i;
    int aux;
    int soma;
    int qtd;
    int qtddiv;
    float media;

    do
    {
        system("cls");//clear
        qtdJaMostrados = 0;
        soma = 0;
        qtd = 0;
        aux = 1; //testar se o numero � primo

        do
        {
            printf("Quantos primos mostrar (valor deve ser positivo): ");
            scanf("%d", &qtdPrimosMostrar);
        }while(qtdPrimosMostrar <0);

        while(qtdJaMostrados < qtdPrimosMostrar)
        {
            qtddiv = 0;//para cada aux a ser testado
            for(i=2; i<=aux/2; i++)
            {
                if(aux%i == 0)
                {
                    qtddiv++;
                    i = aux;//para for�ar a saida do for
                }
            }
            if(qtddiv == 0)
            {
                printf("%d\t", aux);
                qtdJaMostrados++;
                if(qtdJaMostrados % 5 == 0)
                {
                    printf("\n");
                }
            }
            aux++;
        }


        printf("\n\n\nExecutar novamente? (S/s para sim): ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir == 'S' || repetir == 's');
    system("pause");
    return(0);
}
