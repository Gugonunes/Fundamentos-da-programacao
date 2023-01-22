/*13) Implemente um algoritmo que lê números informados pelo usuário. O algoritmo
deve parar quando informado um número negativo. Para cada número lido, exceto o
número negativo que representa a saída, o algoritmo deve imprimir a quantidade de
dígitos do número informado.
Desafio: elaborar o algoritmo para qualquer valor de entrada (inteiro válido).
Exemplo:
876654 = 6 dígitos
154 = 3 dígitos
8 = 1 dígito
0 = 1 dígito (cuidado com esse caso especial)*/
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
