/*3) Fazer uma função para calcular o fatorial de um número. Fazer uma função para
mostrar o processo de cálculo do fatorial. A função será implementada em um arquivo de
cabeçalho. Fazer as opções com switch case e a variável passada como parâmetro do
switch deve ser char. E fazer uma função para realizar a funcionalidade de system
(“pause”) e outra para limpar o buffer
a) Usar a primeira função para calcular a média do fatorial dos números entre 1 e 8.
b) Usar a primeira função para mostrar o fatorial de um valor informado pelo usuário.
Continuar a leitura enquanto informados valores positivos.
c) Usar essas duas funções para ler dois limites entre 1 e 14 e mostrar da seguinte forma
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
        printf("A - Média do fatorial entre 1 e 9\n");
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
                        printf("\nFatorial de %d é %d\n", num, calcularfatorial(num));
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
                printf("\nOpção invalida");
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
