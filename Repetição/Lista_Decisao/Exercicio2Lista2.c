/*2) Ler três valores inteiros, encontrar e mostrar o número do meio. Observação idem
ao exercício anterior. “menor entre %d, %d e %d é %d”, num1, num2, num3, menor); */
#include<stdio.h>
int main (void)
{
    int num1, num2, num3, meio;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);

    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("Informe o terceiro numero: ");
    scanf("%d", &num3);

    if((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2))
    {
        meio = num1;
        printf("menor entre %d, %d e %d é %d", num1, num2, num3, meio);
    }
    else if((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1))
    {
        meio = num2;
        printf("menor entre %d, %d e %d é %d", num1, num2, num3, meio);
    }
    else
    {
        meio = num3;
        printf("menor entre %d, %d e %d é %d", num1, num2, num3, meio);

    }
}
