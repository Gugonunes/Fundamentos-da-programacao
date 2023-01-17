/*3) Ler um número N qualquer maior ou igual a 1 e menor ou igual a 50 e apresentar o
valor obtido da multiplicação sucessiva de N por 2, enquanto o produto for menor que
250 (N*2; N*2*2; N*2*2*2; etc.). O valor N deverá ser verificado quanto a sua validade.
Caso o usuário informe um valor fora da faixa, o programa deverá informar que o valor
digitado não é válido e repetir a leitura.
Atenção: o produto deve ser menor que 250.*/
#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int num, i, j, f, qtd;
    char repetir;
    do
    {
        system("cls");
        //
        qtd=0;
        do
        {
            printf("Informe um numero (i<= num <=50):");
            scanf("%d", &num);
            if(num<1 || num>50)
            {
                printf("\nValor invalido, informe outro\n");
            }
        }while(num<1 || num>50);

        f=num;
        for(i=num; i<=250; i=j)
        {


            if(num*2<=250)
            {
               num = num*2;
               j=num;
               qtd++;
               printf("%d", f);

               for(i=1; i<=qtd; i++)
                {
                    printf("*2");
                }
            printf("-->%d\n", num);
            }

            else
            {
                j = 300;
            }
        }
        printf("Numero final = %d\n", num);

        printf("Executar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
