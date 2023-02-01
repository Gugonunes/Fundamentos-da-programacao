/*7) Ler tr�s valores que representam os lados de um tri�ngulo e determinar se esses
valores podem formar um tri�ngulo. Para formar um tri�ngulo � necess�rio que a
soma de dois lados quaisquer seja maior (ou igual, no caso de tri�ngulo com �rea
zero) ao valor do outro lado.*/
#include <stdio.h>
int main (void)
{
    float lado1, lado2, lado3;

    printf("Informe o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Informe o segundo lado: ");
    scanf("%f", &lado2);

    printf("Informe o terceiro lado: ");
    scanf("%f", &lado3);

    if( ((lado1 + lado2) < lado3) || ((lado1 + lado3) < lado2) || ((lado2 + lado3) < lado1))
    {
        printf("Os valores nao podem formar um triangulo");
    }

    else
    {
        printf("Os valores podem formar um triangulo");
    }
}
