/*4) Leia dos valores que representam os limites de um intervalo. O usu�rio pode informar
os valores em ordem crescente ou decrescente. Mostrar os divis�veis por x e n�o
divis�veis por y nesse intervalo. X e y s�o vari�veis informadas pelo usu�rio.
Exemplo:
Informados: 5 e 15 como limites e 2 para x e 3 para y.
Mostrar os divis�veis por 2 e n�o divis�veis por 3 entre 5 e 100:
2 4 6 8 10 14*/
#include<stdio.h>
int main (void)
{
    int limite1, limite2, x, y, i;

    printf("Informe os limites(1/5): ");
    scanf("%d/%d", &limite1, &limite2);

    printf("Informe o x e y(1/3): ");
    scanf("%d/%d", &x, &y);

    if(limite1>limite2)
    {
        i = limite1;
        limite1 = limite2;
        limite2 = i;
    }

    for(i=limite1; i<=limite2; i++)
    {
        if(i%x ==0 && i%y !=0)
        {
            printf("%d\t", i);
        }
    }
}

