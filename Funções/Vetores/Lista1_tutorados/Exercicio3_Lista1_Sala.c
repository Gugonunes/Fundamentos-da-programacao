/*3) Ler um nome e ler um caractere. Contar quantos caracteres o nome possui. Verificar se o caractere informado est� na string (nome lido). Se estiver, mostrar o �ndice em que o mesmo est� armazenado. Considerar a �ltima ocorr�ncia do caractere se existir mais de uma. Complementar o exerc�cio considerando a primeira concorr�ncia do caractere na string.
Gerar uma fun��o para contar a quantidade de caracteres da string e outra para verificar se o caractere est� na string.
*/
#include<stdio.h>
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vetores.h"
int main(void)
{
    char texto[51];//at� 50, reserva 1 para o final
    int i;
    char caractere;

    printf("Informe um texto: ");
    gets(texto); //scanf("%[^\n]s", texto);
    fflush(stdin);
    printf("informe um caractere: ");
    scanf("%c", &caractere);

    i = contarString(texto);
    printf("%s possui %d caracteres\n", texto, i);

    i=verificarCaractere(texto, caractere);
    if(i==-1)
    {
        printf("%c nao esta na string %s\n", caractere, texto);
    }
    else
    {
        printf("%c esta na string %s, com a primeira ocorrencia no indice %d\n", caractere, texto, i);
    }

}
