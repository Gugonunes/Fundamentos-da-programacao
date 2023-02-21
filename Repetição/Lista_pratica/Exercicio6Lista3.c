/*6) Faça um programa que calcule a quantidade necessária de latas de tinta e o custo para
pintar um tanque cilíndrico. Apresentar o custo com duas casas decimais. Se para a
quantidade de latas de tinta for obtido um resultado fracionário arredondar o número para o
próximo inteiro. Por exemplo: 5.2 apresentar 6 latas de tinta. A área a ser pintada é
calculada pela fórmula: AREA = 2 * PI * raio2
 + 2 * PI * raio * altura. Uma lata de tinta
contém 3,6 litros e que cada litro de tinta é suficiente para pintar três metros quadrados.
Observação: a função int ceil (float num) faz arredondamento do número para cima, ou
seja, para o próximo inteiro. É necessário incluir essa biblioteca com # include <math.h>
Exemplo de uso:
Valor = ceil(Variável);
*/
#include <stdio.h>
#include <math.h>

int main (void)
{
    float raio, altura, precolata, area, mporlata, precototal;
    int qntlatas;

    printf("Informe o raio do tanque em m: ");
    scanf("%f", &raio);

    printf("Informe a altura do tanque em m: ");
    scanf("%f", &altura);

    printf("Informe o preco de cada lata: ");
    scanf("%f", &precolata);

    area = (2*3.1415*raio*raio) + (2*3.1415*raio*altura);
    mporlata = 3.6 * 3;
    qntlatas = ceil(area/mporlata);
    precototal = qntlatas * precolata;

    printf("\nO numero total de latas foi: %d\n", qntlatas);
    printf("nO preco total foi de: %.2f\n", precototal);

}
