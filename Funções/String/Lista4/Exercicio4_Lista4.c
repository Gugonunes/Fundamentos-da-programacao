/*4) Ler um texto com at� 50 caracteres. Percorrer esse texto e verificar quais caracteres
s�o vogais. Criar um vetor armazenando o n�mero da vogal correspondente e somente
das vogais (1 para a, 2 para e ....). Para simplificar, considerar que ser�o informados
somente caracteres min�sculos.
Por exemplo:
Informado o texto:
Texto para verificacao de vogais
Sa�da (vetor gerado):
2 4 1 1 2 3 3 1 1 4 4 1 3*/
#include<stdio.h>
#include<stdlib.h>
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vrum.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programa��o\Fun��es\vetores.h"
int main(void)
{
    char repetir;
    char texto[51];
    int i;
    int vetvogais[50];
    int qtd;

    do
    {
        system("cls");
        //
        i=0;
        qtd=0;
        printf("\nInforme um texto: ");
        fflush(stdin);
        gets(texto);

        while(texto[i]!='\0')
        {
            if(texto[i]== 'a' || texto[i] == 'A')
            {
                vetvogais[qtd++] = 1;
            }
            else if(texto[i]== 'e' || texto[i] == 'E')
            {
                vetvogais[qtd++] = 2;
            }
            else if(texto[i]== 'i' || texto[i] == 'I')
            {
                vetvogais[qtd++] = 3;
            }
            else if(texto[i]== 'o' || texto[i] == 'O')
            {
                vetvogais[qtd++] = 4;
            }
            else if(texto[i]== 'u' || texto[i] == 'U')
            {
                vetvogais[qtd++] = 5;
            }
            i++;
        }

        printf("\n");
        mostrarVetorInt(vetvogais, qtd);



        printf("\nDeseja repetir? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s'||repetir=='S');
    return(0);
    system("pause");
}
