/*3) Ler uma string, contar e exibir a quantidade de cada uma das vogais existentes nessa
string. Armazenar essas quantidades em um vetor. É indispensável armazenar a
quantidade à medida que a string é percorrida (algo como VetVogais[X]++ ou
VetVogais[X] = VetVogais[X] + 1). Portanto, o vetor que armazena a quantidade de
vogais deve ser inicializado com zero antes de ser utilizado. Mostrar os resultados da
seguinte forma.
Vogal Quantidade
===================
A/a 5
E/e 0
I/i 1
O/o 2
U/u 0*/
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vetores.h"
#include "C:\Users\admin\Desktop\Eng. CP\Fundamentos da Programação\Funções\vrum.h"
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    char texto[201];
    int vetvogais[5];
    int i;

    do
    {
        system("cls");
        //
        vetvogais[0] = 0;
        vetvogais[1] = 0;
        vetvogais[2] = 0;
        vetvogais[3] = 0;
        vetvogais[4] = 0;
        printf("\nInforme uma string: ");
        fflush(stdin);
        gets(texto);

        i=0;
        while(texto[i]!='\0')
        {
            if(texto[i]== 'a' || texto[i] == 'A')
            {
                vetvogais[0]++;
            }
            else if(texto[i]== 'e' || texto[i] == 'E')
            {
                vetvogais[1]++;
            }
            else if(texto[i]== 'i' || texto[i] == 'I')
            {
                vetvogais[2]++;
            }
            else if(texto[i]== 'o' || texto[i] == 'O')
            {
                vetvogais[3]++;
            }
            else if(texto[i]== 'u' || texto[i] == 'U')
            {
                vetvogais[4]++;
            }
            i++;
        }
        printf("\nA/a --> %d", vetvogais[0]);
        printf("\ne/E --> %d", vetvogais[1]);
        printf("\ni/I --> %d", vetvogais[2]);
        printf("\no/O --> %d", vetvogais[3]);
        printf("\nu/U --> %d", vetvogais[4]);

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
