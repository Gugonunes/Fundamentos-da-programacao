/*1) A fórmula para cálculo de combinações simples de n elementos p a p é: n!/(p! * (n-p)!). Utilizar a
função do fatorial para implementar a fórmula. Nessa fórmula n significa o universo de elementos
(a quantidade de dígitos que podem ser utilizados para compor os números de telefone (10 que são
os dígitos de 0 a 9), a quantidade de números da loteria a serem combinados, 60 no caso da megasena)
e p o total de elementos combinados (9 dígitos no caso de São Paulo, por exemplo e 6 para os
números da mega-sena).
Observação: a função deverá ser incluída com #include <Arquivofuncao.h>
2) Elaborar uma função para calcular o mdc (maior divisor comum) entre dois números. Os
números são lidos na função chamadora e passados como parâmetro para a função que calcula o
mdc. Esta função retorna o mdc para a função chamadora.
3) Elaborar uma função para calcular o mmc (mínimo múltiplo comum) entre dois números. Os
números são lidos e passados como parâmetro para a função que calcula o mmc. Esta função
retorna o mmc para a função chamadora.*/
#include<stdio.h>
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"

int main(void)
{
   char repetir;
   char opcao;
   int num, nump;
   int comb;
   int resultado;

   do
   {
       system("cls");
       //
       printf("A - Formula para calculo de combinações simples de n elementos p a p\n");
       printf("B - Formula do mdc\n");
       printf("C - Formula do mmc\n");
       printf("\nOpcao: ");
       fflush(stdin);
       scanf("%c", &opcao);

       switch(opcao)
       {
           case 'a':
           case 'A':
                {
                    //
                    printf("\nInforme o numero N ");
                    scanf("%d", &num);
                    printf("\nInforme o numero P");
                    scanf("%d", &nump);
                    comb = calcularfatorial(num) / (calcularfatorial(nump) * calcularfatorial(num - nump));
                    printf("\nCombinação simples de %d e %d : %d", num, nump, comb);
                    break;
                }
           case 'b':
           case 'B':
                {
                    //
                    printf("\nInforme o primeiro numero: ");
                    scanf("%d", &num);
                    printf("\nInforme o segundo numero: ");
                    scanf("%d", &nump);

                    printf("\nMDC de %d e %d é: %d", num, nump, mdc(num, nump));
                    break;
                }
           case 'c':
           case 'C':
                {
                    //
                    printf("\nInforme um numero");
                    scanf("%d", &num);
                    printf("\nInforme outro numero");
                    scanf("%d", &nump);

                    resultado = mmc(num, nump);
                    printf("\nO resultado do mmc entre %d e %d é: %d", num, nump, resultado);
                    break;
                }
           default:
            {
                printf("\nOpcao invaldida");
            }
       }



       printf("\nExecutar novamente? ");
       fflush(stdin);
       scanf("%c", &repetir);
   }while(repetir=='s' || repetir == 'S');
   paradinha();
   return(0);
}

