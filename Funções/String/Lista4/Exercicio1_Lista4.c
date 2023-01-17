/*1) Ler um nome. Se o primeiro caractere for 'a' imprimir esse nome. Se não for contar
quantos caracteres 'o' o nome possui. Repetir a leitura até que o usuário informe zero (0)
como primeiro caractere do nome.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    char texto[101];
    int i;
    char caractere = 'a';
    int qtd;

    do
    {
        system("cls");
        qtd=0;
        //

        do
        {
            printf("\nInforme um nome: ");
            fflush(stdin);
            gets(texto);
            if(verificarCaractere(texto, '0')!=0)
            {

                if(verificarCaractere(texto, caractere) == 0)
                {
                    printf("\n%s", texto);
                }
                else
                {
                    for(i=0; i<101; i++)
                    {
                        if(texto[i] == 'o')
                        {
                            qtd++;
                        }
                    }
                    printf("\n%s possui %d caracteres 'o'", texto, qtd);
                }
            }
        }while(texto[0]!=0);

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
