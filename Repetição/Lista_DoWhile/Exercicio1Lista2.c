/*1) Ler um n�mero que representa a quantidade de valores pares, divis�veis por 3 e n�o
divis�veis por 5 que devem ser mostrados. Apresentar esses valores n por linha. n �
informado pelo usu�rio e deve ser positivo. Os valores s�o apresentados separados por
tabula��o.
Por exemplo:
O usu�rio digita 7 (significa que ele quer visualizar os sete primeiros valores que atendem
condi��es) e em seguida 5 (que significa a quantidade de valores por linha que devem ser
mostrados).
Ser� mostrado:
6 12 18 24 36 //cinco valores por linha*/
#include<stdio.h>
int main(void)
{
    int num, i=0, qtd=0, qtdl;

    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("Informe a quantidade de valores por linha: ");
    scanf("%d", &qtdl);

    while(qtd<num)
    {
        if(i%2==0 && i%3==0 && i%5!=0)
        {
           qtd++;
           printf("%d\t", i);
           if(qtd%qtdl==0)
           {
               printf("\n");
           }
        }
        i++;
    }
}
