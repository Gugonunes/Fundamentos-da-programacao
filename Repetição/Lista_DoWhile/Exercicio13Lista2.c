/*13) Implemente um algoritmo que l� n�meros informados pelo usu�rio. O algoritmo
deve parar quando informado um n�mero negativo. Para cada n�mero lido, exceto o
n�mero negativo que representa a sa�da, o algoritmo deve imprimir a quantidade de
d�gitos do n�mero informado.
Desafio: elaborar o algoritmo para qualquer valor de entrada (inteiro v�lido).
Exemplo:
876654 = 6 d�gitos
154 = 3 d�gitos
8 = 1 d�gito
0 = 1 d�gito (cuidado com esse caso especial)*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int num, qtd, i;

    do
    {
        system("cls");
        //

        do
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);

            if(num>=0)
            {
                qtd=0;
                if(num==0)
                {
                    qtd++;
                }
                else
                {
                    for(i=num; i>0; i=i/10)
                    {
                        qtd++;
                    }
                }
                printf("\nPara %d, quantidade de digitos = %d\n", num, qtd);
            }
        }while(num>=0);

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
