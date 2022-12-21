/*3) Fazer uma fun��o para calcular o fatorial de um n�mero. Fazer uma fun��o para
mostrar o processo de c�lculo do fatorial. A fun��o ser� implementada em um arquivo de
cabe�alho. Fazer as op��es com switch case e a vari�vel passada como par�metro do
switch deve ser char. E fazer uma fun��o para realizar a funcionalidade de system
(�pause�) e outra para limpar o buffer
a) Usar a primeira fun��o para calcular a m�dia do fatorial dos n�meros entre 1 e 8.
b) Usar a primeira fun��o para mostrar o fatorial de um valor informado pelo usu�rio.
Continuar a leitura enquanto informados valores positivos.
c) Usar essas duas fun��es para ler dois limites entre 1 e 14 e mostrar da seguinte forma
(para os limites 3 e 6)
3! = 3 * 2 * 1 = 6
4! = 4 * 3 * 2 * 1 = 24
5! = 5 * 4 * 3 * 2 * 1 = 120
6! = 6* 5 * 4 * 3 * 2 * 1 = 720*/

#include <stdio.h>
#include "vrum.h"

int main (void)
{
    char repetir;
    char opcao;
    int qtd;
    int soma;
    float media;
    int limiteinf;
    int limitesup;
    int num;

    do
    {
        system("cls");
        //
        soma = 0;
        qtd=0;
        printf("A - M�dia do fatorial entre 1 e 9\n");
        printf("B - Fatorial de numeros informados\n");
        printf("C - Fatorial entre dois limites\n");
        printf("Opcao: ");
        //limparbuffer();
        fflush(stdin);
        scanf("%c", &opcao);

        switch(opcao)
        {
            case 'A':
            case 'a':
            {
                //
                for(num = 1; num<=8; num++)
                {
                    soma = soma + calcularfatorial(num);
                    qtd++;
                }
                media = (float)soma / qtd;
                printf("\nMedia do fatorial entre 1 e 8: %.2f\n", media);
                break;
            }
            case 'b':
            case 'B':
            {
                //
                do
                {
                    printf("Informe um numero(negativo para sair): ");
                    scanf("%d", &num);

                    if(num>0)
                    {
                        printf("\nFatorial de %d � %d\n", num, calcularfatorial(num));
                    }
                }while(num>0);
                break;
            }
            case 'c':
            case 'C':
            {
                //
                do
                {
                    printf("Informe um valor entre 1 e 14: ");
                    scanf("%d", &limiteinf);
                }while(limiteinf < 1 || limiteinf > 14);

                do
                {
                    printf("Informe outro valor entre 1 e 14: ");
                    scanf("%d", &limitesup);
                }while(limitesup < 1 || limitesup > 14);

                if(limitesup < limiteinf)
                {
                    num = limiteinf;
                    limiteinf = limitesup;
                    limitesup = num;
                }

                for(num = limiteinf; num<=limitesup; num++)
                {
                    printf("%d - ", num);
                    mostrarfatorial(num);
                    printf(" = %d\n", calcularfatorial(num));
                }
                break;
            }
            default:
            {
                printf("\nOp��o invalida");
            }
        }

        printf("\nExecutar novamente? ");
        //limparbuffer();
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir=='S');
    return(0);
    paradinha();
}
