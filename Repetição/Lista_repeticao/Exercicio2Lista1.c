/*2) Calcular e mostrar o fatorial de um n�mero informado pelo usu�rio.*/
#include<stdio.h>
int main(void)
{
    int i, num, resultado=1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    for(i=num;i>1;i--)
    {
        resultado = resultado*i;
    }
    printf("o fatorial de %d � %d", num, resultado);
}
