/*3) Ler um nome e ler um caractere. Contar quantos caracteres o nome possui. Verificar se o caractere informado está na string (nome lido). Se estiver, mostrar o índice em que o mesmo está armazenado. Considerar a última ocorrência do caractere se existir mais de uma. Complementar o exercício considerando a primeira concorrência do caractere na string.
Gerar uma função para contar a quantidade de caracteres da string e outra para verificar se o caractere está na string.
*/
#include<stdio.h>
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
int main(void)
{
    char texto[51];//até 50, reserva 1 para o final
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
