/*3) Ler n�meros informados pelo usu�rio. Parar a leitura quando informado um n�mero
negativo. Esse n�mero n�o deve ser considerado na contagem. Contar quantos n�meros
divis�veis por 5 e pares foram informados.
Lembrar de inicializar vari�veis.*/
#include<stdio.h>
int main(void)
{
    int i, num, qtd=0;
    do
    {
        printf("Informe um numero: ");
        fflush(stdin);
        scanf("%d", &i);

        if(i>=0)
        {
            if(i%5==0 && i%2==0)
            {
                qtd++;
            }
        }

    }while(i>=0);
    printf("Quantidade : %d", qtd);
}

