/*1) Ler tr�s valores inteiros, encontrar e mostrar o menor deles. Deve ser criada uma
vari�vel para armazenar o menor valor informado. Observa��o: no algoritmo dever�
existir apenas uma instru��o printf para apresentar o menor valor e no formato:
printf(�menor entre %d, %d e %e � %d�, num1, num2, num3, menor);*/
#include<stdio.h>
int main (void)
{
    int num1, num2, num3, menor;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

    if(num1 < num2 && num1 < num3)
    {
        menor = num1;
        printf("menor entre %d, %d e %d � %d", num1, num2, num3, menor);
    }
    else if(num2 < num1 && num2 < num3)
    {
        menor = num2;
        printf("menor entre %d, %d e %d � %d", num1, num2, num3, menor);
    }
    else
    {
        menor = num3;
        printf("menor entre %d, %d e %d � %d", num1, num2, num3, menor);
    }
}
