/*5 ) Encontrar o maior e o menor de um conjunto de valores informados pelo usu�rio. O valor
0 representa a sa�da e n�o deve ser considerado no restante do processamento.
a) Dos n�meros informados que possuem at� 3 d�gitos verificar se o mesmo possui como
unidade, dezena ou centena um determinado digito (entre 0 e 9) informado pelo usu�rio.
Essa verifica��o deve ser realizada inclusive para o primeiro n�mero informado e para os
positivos ou negativos. Ao ler o d�gito que o usu�rio informar para que seja verificado se o
mesmo � unidade, dezena ou centena dos n�meros informados, validar para que esse valor
esteja entre 0 e 9.
b) Contar quantos valores pares s�o informados. Essa contagem inclui todos os n�meros,
inclusive o primeiro, exceto o zero que � a condi��o de sa�da.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int num, maior, menor;
    char primeiro;
    int qtddig, qtdpar;
    int i, j;
    int dig1, dig2, dig3, dig;

    do
    {
        system("cls");
        //
        primeiro = 's';
        qtddig=0;
        qtdpar=0;
       /*
        do
        {
            printf("Informe um digito: ");
            scanf("%d", &dig);
        }while(dig<0 || dig>9);*/ // nao sei se era pra perguntar o digito antes ou em cada numero

        do
        {
            printf("Informe um numero: ");
            scanf("%d", &num);

            if(num!=0)
            {
                qtddig=0;
                if(primeiro == 's')
                {
                    maior = num;
                    menor = num;
                    primeiro = 'j';
                }
                else
                {
                    if(num>maior)
                    {
                        maior=num;
                    }
                    else if(num<menor)
                    {
                        menor = num;
                    }
                }
                //maior e menor feitos
                //verificar se o numero tem 3 digitos

                if(num<0)
                {
                    j = num*-1;
                }
                else
                {
                    j = num;
                }

                for(i=j; i>0; i = i/10)
                {
                    qtddig++;

                }
                if(qtddig<=3)
                {
                    dig1 = num/100;
                    dig2 = num/10%10;
                    dig3 = num%10;

                    do
                    {
                        printf("Informe um digito: ");
                        scanf("%d", &dig);
                    }while(dig<0 || dig>9);

                    if(dig1 == dig)
                    {
                        printf("\n%d � centena de %d\n", dig, num);
                    }
                    if(dig2 == dig)
                    {
                        printf("\n%d � dezena de %d\n", dig, num);
                    }
                    if(dig3 == dig)
                    {
                        printf("\n%d � unidade de %d\n", dig, num);
                    }
                }
                if(num%2==0)
                {
                    qtdpar++;
                }

            }
        }while(num!=0);

        printf("Maior: %d \t Menor: %d", maior, menor);
        printf("\nPares informados: %d\n", qtdpar);


        printf("Executar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='S' || repetir =='s');
    system("pause");
    return(0);
}
