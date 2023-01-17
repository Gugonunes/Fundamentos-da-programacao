/*8) Ler uma frase e imprimir a frase na vertical com uma palavra por linha.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;

    int i;
    char texto[10001];
    do
    {
        system("cls");
        //
        printf("Informe uma frase: ");
        fflush(stdin);
        gets(texto);
        i=0;

        while(texto[i] != '\0')
        {
            printf("%c", texto[i]);

            if(texto[i] == ' ')
            {
                printf("\n");
            }
            i++;
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
