/*2) Elaborar um programa que aceita e valida uma senha com 6 d�gitos num�ricos, que
deve ser armazenada em uma string. O usu�rio tem tr�s tentativas para acertar a senha,
se ultrapassar esse limite, ele deve ser informado. O usu�rio tamb�m deve ser informado
se ele acertou a senha em at� tr�s tentativas.*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vetores.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    char texto[7];
    int i;
    int qtd=1, qtdigual=0;

    do
    {
        system("cls");
        fflush(stdin);
        //
        int vet[6] = {'1','2','3','4','5','6'};
        qtd=1;

        do
        {
            printf("\nInforme a senha: ");
            gets(texto);
            fflush(stdin);

            if(qtd<=3)
            {
                qtdigual=0;
                i=0;
                while(texto[i] != '\0')
                {
                    if(texto[i] == vet[i])
                    {
                        qtdigual++;
                    }
                    i++;
                }
                if(qtdigual == 6)
                {
                    printf("\nPARABENS MEU COLEGA");
                    printf("\nForam necessarias %d tentativas", qtd);
                    qtd = 4;
                }

            }
            qtd++;
        }while(qtd<=3);



        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
