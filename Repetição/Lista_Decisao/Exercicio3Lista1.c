/*3) Elaborar um algoritmo que leia um caractere. Se informado ‘F’ ou ‘f’ mostrar a
mensagem “pessoa física”, se informado ‘J’ ou ‘j’ mostrar a mensagem “pessoa jurídica”
ou "tipo de pessoa inválido" para qualquer outro caractere.
char Pessoa; //declarar uma variável do tipo char
scanf(“%c”,&Pessoa); //para ler um char
if (Pessoa == ‘f’ || Pessoa == ‘F’) //para comparar se o conteúdo armazenado na variável
é um determinado caractere.
*/

#include <stdio.h>

int main (void)
{
    char pessoa; // armazenar um unico caractere

    printf("Pessoa fisica ou juridica (F/f ou J/j): ");
    scanf("%c", &pessoa);

    if(pessoa == 'F' || pessoa == 'f')
    {
        printf("Pessoa fisica\n");
    }
    else if (pessoa == 'J' || pessoa == 'j')
    {
        printf("Pessoa juridica\n");
    }
    else
    {
        printf("Caractere invalido");
    }
}
