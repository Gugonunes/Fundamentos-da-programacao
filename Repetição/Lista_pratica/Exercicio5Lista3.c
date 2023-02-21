/*5) Faça um programa para calcular a quantidade de fita necessária, em centímetros, para
amarrar um pacote com duas voltas, sendo uma pela largura e outra pelo comprimento do
pacote. Serão fornecidas a largura, a altura e o comprimento do pacote. Para amarrar as
pontas da fita são necessários 15 cm de fita em cada ponta. A Figura ilustra a maneira como
a fita é passada pelo pacote.
*/

#include<stdio.h>
int main(void)
{
    float larg, comp, alt, fitalarg, fitacomp, total;

    printf("Informe a largura do pacote em cm: ");
    scanf("%f", &larg);

    printf("Informe o comprimento do pacote em cm: ");
    scanf("%f", &comp);

    printf("Informe a altura: ");
    scanf("%f", &alt);

    fitalarg = alt*2 + larg*2 +15;
    fitacomp = alt*2 + comp*2 +15;
    total = fitacomp + fitalarg;

    printf("\nO comprimento total necessario de fita é de: %.1f\n", total);

}
