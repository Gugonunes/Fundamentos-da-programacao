/*1) Fazer uma calculadora com as opera��es de soma, subtra��o, multiplica��o, divis�o e
resto. Cada opera��o � uma fun��o e deve ser acessada a partir de um menu. As fun��es
s�o implementadas na pr�prio programa:
a) Soma sem par�metros e sem retorno
b) Subtra��o com par�metros e sem retorno
c) Multiplica��o sem par�metros e com retorno
d) Divis�o com par�metros e com retorno.
e) Resto com par�metros e com retorno.*/

#include<stdio.h>
#include<stdlib.h>

void somar(void);
void subtrair(int num1, int num2);//cabe�alho da fun��o
int multiplicacao(void);
int divisao(int num1, int num2);
int resto(int num1, int num2);

int main(void)
{
    char repetir;
    char opcao;
    int valor1, valor2;
    int retorno;

    do
    {
        system("cls");
        //
        printf("A - Adicao\n");
        printf("S - Subtracao\n");
        printf("M - Multiplicacao\n");
        printf("D - Divisao\n");
        printf("R - Resto\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch(opcao)
        {
            case 'A':
            case 'a':
                {
                    //void somar(void);
                    somar();
                    break;
                }
            case 'S':
            case 's':
                {
                    //void subtrair(int num1, int num2);
                    printf("Informe um valor: ");
                    scanf("%d", &valor1);

                    printf("Informe outro valor: ");
                    scanf("%d", &valor2);
                    subtrair(valor1, valor2);

                    break;
                }
            case 'M':
            case 'm':
                {
                    //int multiplicacao(void)
                    retorno = multiplicacao();
                    printf("Multiplica��o: %d\n", retorno);
                    break;
                }
            case 'D':
            case 'd':
                {
                    //int divisao(int num1, int num2)
                    printf("Informe um valor: ");
                    scanf("%d", &valor1);

                    printf("Informe outro valor: ");
                    scanf("%d", &valor2);
                    if(valor2 !=0)
                    {
                        retorno = divisao(valor1, valor2);
                        printf("\nDivisao: %d\n", retorno);
                    }
                    else
                    {
                        printf("\nN�o � possivel realizar divisao por zero\n");
                    }
                    break;
                }
            case 'R':
            case 'r':
                {
                    //int resto(int num1, int num2);
                    printf("Informe um valor: ");
                    scanf("%d", &valor1);

                    printf("Informe outro valor: ");
                    scanf("%d", &valor2);
                    if(valor2 !=0)
                    {
                        retorno = resto(valor1, valor2);
                        printf("\nResto: %d\n", retorno);
                    }
                    else
                    {
                        printf("\nN�o � possivel realizar divisao por zero\n");
                    }
                    break;
                    break;
                }

            default:
                {
                    printf("Opcao invalida\n");
                }
        }//fim do switch


        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir == 's' || repetir == 'S');
    system("pause");
    return(0);
}//fim da main

//a) Soma sem parametros e sem retorno
void somar(void)
{
    int num1, num2;
    int resultado;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("Soma: %d\n", resultado);
}

//b) Subtra��o com parametros e sem retorno
void subtrair(int num1, int num2)
{
    int resultado;
    resultado = num1 - num2;
    printf("Subtra��o: %d\n", resultado);
}

//c) Multiplica��o sem parametros e com retorno
int multiplicacao(void)
{
    int num1, num2;
    int resultado;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    resultado = num1 * num2;
    return(resultado);//return(num1*num2);
}

//d) Divis�o com par�metros e com retorno
int divisao(int num1, int num2)
{
    int retorno;
    retorno = num1/num2;
    return(retorno);
    //return(num1/num2);
}

//e) Resto com par�metros e com retorno
int resto(int num1, int num2)
{
    int retorno;
    retorno = num1 - (num1/num2 * num2);
    return(retorno);
}











