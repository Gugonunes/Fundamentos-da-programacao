/*7) Ler um texto imprimi-lo de trás pra frente.
Sugestão: contar quantos caracteres a string possui (tamanho). Para contar percorrer a
string até encontrar ‘\0’que indica final da string.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    char texto[501];
    int i;

    do
    {
        system("cls");
        //
        i=0;
        printf("\nInforme um texto: ");
        fflush(stdin);
        gets(texto);
        while(texto[i] != '\0')
        {
            i++;
        }

        for(i=i; i>=0; i--)
        {
            printf("%c", texto[i]);
        }



        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
