/*5) Ler uma informação no formato texto (string):
a) imprimir os caracteres na posição par;
b) imprimir os caracteres na posição ímpar;
c) mostrar somente o primeiro caractere de cada palavra, separados por dois espaços;
d) mostrar somente o último caractere de cada palavra, separados por dois espaços;
e) copiar a primeira palavra para outra string e mostrá-la com do while, caractere a
caractere. É indispensável finalizar a string copiada, ou seja, colocar \0 no final da
mesma.
Exemplo para “mostrar somente o primeiro caractere de cada palavra, separados por
dois espaços”.
Informado: “Os ótimos alunos da Universidade Tecnológica Federal do Paraná, campus
Pato Branco.”
Mostrado:
“O ó a d U T F d P c P B”*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    char texto[500];
    int i, j;
    char opcao;
    char texto2[500];

    do
    {
        system("cls");
        //
        i=0;

        printf("\nInforme um texto: ");
        fflush(stdin);
        gets(texto);

        printf("\na) imprimir os caracteres na posição par");
        printf("\nb) imprimir os caracteres na posição ímpar");
        printf("\nc) mostrar somente o primeiro caractere de cada palavra, separados por dois espaços");
        printf("\nd) mostrar somente o último caractere de cada palavra, separados por dois espaços");
        printf("\ne) copiar a primeira palavra para outra string e mostrá-la com do while, caractere a caractere");
        printf("\nOpcao: ");

        fflush(stdin);
        scanf("%c", &opcao);

        switch(opcao)
        {
        case 'a':
        case 'A':
            {
                while(texto[i]!='\0')
                {
                    printf("%d/t", texto[i]);
                    i = i+2;
                }
                break;
            }
        case 'b':
        case 'B':
            {
                i=1;
                while(texto[i]!='\0')
                {
                    printf("%d/t", texto[i]);
                    i = i+2;
                }
                break;
            }
        case 'c':
        case 'C':
            {
                i=0;
                if(texto[0] != 32)
                {
                    printf("%c  ", texto[0]);

                }
                while(texto[i]!='\0')
                {
                    if(texto[i] == 32)
                    {
                        printf("%c  ", texto[i+1]);
                    }
                    i++;
                }
                break;
            }
        case 'd':
        case 'D':
            {
                i=0;
                while(texto[i]!='\0')
                {
                    if(texto[i] == 32)
                    {
                        printf("%c  ", texto[i-1]);
                    }
                    i++;
                }

                    if(texto[i-1] != 32)
                    {
                        printf("%c  ", texto[i-1]);
                    }
                break;
            }
        case 'e':
        case 'E':
            {
                i=0;
                while(texto[i]!=32)
                {
                    texto2[i] = texto[i];
                    i++;
                }
                i=0;
                do
                {
                    printf("%c \t", texto2[i]);
                    i++;
                }while(texto2[i]!='\0');
                break;
            }
        default:
            printf("\nOpcao invalida");
        }


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
