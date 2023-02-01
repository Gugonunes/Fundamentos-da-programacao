/*7) Ler três valores que representam os lados de um triângulo e determinar se esses
valores podem formar um triângulo. Para formar um triângulo é necessário que a
soma de dois lados quaisquer seja maior (ou igual, no caso de triângulo com área
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
