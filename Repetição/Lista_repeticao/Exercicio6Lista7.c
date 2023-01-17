/*6) Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário.
Se o usuário informar um número negativo transformá-lo em positivo antes de utilizar.
Por exemplo:
Informe a quantidade de números pares a serem mostrados:
3
mostrar da seguinte forma (incluindo a mensagem antes dos números):
Os 3 primeiros números pares são: 6 12 18*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int num, qtdmostrados, aux;

    do
    {
        system("cls");
        //

        aux=6;
        qtdmostrados=0;
        printf("Informe o numero de termos que deseja visualizar: ");
        scanf("%d", &num);

        if(num<0)
        {
            num = num * -1;
        }

        while(qtdmostrados<num)
        {
            if(aux%3==0 && aux%2==0)
            {
                printf("%d\t", aux);
                qtdmostrados++;
            }
            aux++;
        }

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir == 's' || repetir =='S');
    system("pause");
    return(0);
}
