/*3) Ler números informados pelo usuário. Parar a leitura quando informado um número
negativo. Esse número não deve ser considerado na contagem. Contar quantos números
divisíveis por 5 e pares foram informados.
Lembrar de inicializar variáveis.*/
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

