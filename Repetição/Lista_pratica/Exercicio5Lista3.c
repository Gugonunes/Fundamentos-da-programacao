/*5) Fa�a um programa para calcular a quantidade de fita necess�ria, em cent�metros, para
amarrar um pacote com duas voltas, sendo uma pela largura e outra pelo comprimento do
pacote. Ser�o fornecidas a largura, a altura e o comprimento do pacote. Para amarrar as
pontas da fita s�o necess�rios 15 cm de fita em cada ponta. A Figura ilustra a maneira como
a fita � passada pelo pacote.
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

    printf("\nO comprimento total necessario de fita � de: %.1f\n", total);

}
