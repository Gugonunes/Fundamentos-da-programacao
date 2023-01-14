/*9) Ler uma informação no formato texto, armazenar esse texto lido em um vetor (string)
até o primeiro caractere de espaço. Mostrar a string armazenada.
Observação: colocar ‘\0’ na nova string após o último caractere útil para indicar final da
mesma.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
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
