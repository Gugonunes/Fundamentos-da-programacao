/*7) No intervalo entre 0 e 100, utilizando uma estrutura for para mostrar cada um dos itens
em listagens separadas. Colocar um cabeçalho/título que identifique cada uma das
listagens:
a) os valores desse intervalo em ordem decrescente.
b) os valores pares desse intervalo, sem utilizar if, apenas a variável de
inicializacão, controle e incremento/decremento do for.
c) os múltiplos de 10, em ordem crescente e sem utilizar if, apenas a variável de
inicializacão, controle e incremento/decremento do for.
d) os múltiplos de 5, em ordem decrescente e sem utilizar if, apenas a variável de
inicializacão, controle e incremento/decremento do for.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int i;

    do
    {
        system("cls");
        //
        printf("Valores do intervalo\n");
        for(i=100; i>=1; i--)
        {
            printf("%d\t", i);
        }

        printf("\n\nPares do intervalo\n");
        for(i=0; i<=100; i=i+2)
        {
            printf("%d\t", i);
        }

        printf("\n\nMultiplos de 10 do intervalo\n");
        for(i=0; i<=100; i=i+10)
        {
            printf("%d\t", i);
        }

        printf("\n\nMultiplos de 5 do intervalo\n");
        for(i=100; i>=0; i=i-5)
        {
            printf("%d\t", i);
        }


        printf("\nExecutar novamente?");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir == 's' || repetir =='S');
    system("pause");
    return(0);
}
