/*9) Ler uma informa��o no formato texto, armazenar esse texto lido em um vetor (string)
at� o primeiro caractere de espa�o. Mostrar a string armazenada.
Observa��o: colocar �\0� na nova string ap�s o �ltimo caractere �til para indicar final da
mesma.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vetores.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    char texto[501];
    int i;
        //pulei
    do
    {
        system("cls");
        //
        i=0;
        printf("Informe um texto: ");
        fflush(stdin);

        do
        {
            scanf("%c", &texto[i]);
            i++;
        }while(texto[i] !=' ');
        texto[i] = '\0';
        mostrarString(texto);


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
