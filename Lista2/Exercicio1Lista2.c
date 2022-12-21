/*1) A f�rmula para c�lculo de combina��es simples de n elementos p a p �: n!/(p! * (n-p)!). Utilizar a
fun��o do fatorial para implementar a f�rmula. Nessa f�rmula n significa o universo de elementos
(a quantidade de d�gitos que podem ser utilizados para compor os n�meros de telefone (10 que s�o
os d�gitos de 0 a 9), a quantidade de n�meros da loteria a serem combinados, 60 no caso da megasena)
e p o total de elementos combinados (9 d�gitos no caso de S�o Paulo, por exemplo e 6 para os
n�meros da mega-sena).
Observa��o: a fun��o dever� ser inclu�da com #include <Arquivofuncao.h>
2) Elaborar uma fun��o para calcular o mdc (maior divisor comum) entre dois n�meros. Os
n�meros s�o lidos na fun��o chamadora e passados como par�metro para a fun��o que calcula o
mdc. Esta fun��o retorna o mdc para a fun��o chamadora.
3) Elaborar uma fun��o para calcular o mmc (m�nimo m�ltiplo comum) entre dois n�meros. Os
n�meros s�o lidos e passados como par�metro para a fun��o que calcula o mmc. Esta fun��o
retorna o mmc para a fun��o chamadora.*/
#include<stdio.h>
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"

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
       printf("A - Formula para calculo de combina��es simples de n elementos p a p\n");
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
                    printf("\nCombina��o simples de %d e %d : %d", num, nump, comb);
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

                    printf("\nMDC de %d e %d �: %d", num, nump, mdc(num, nump));
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
                    printf("\nO resultado do mmc entre %d e %d �: %d", num, nump, resultado);
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

