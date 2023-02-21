/*6) Fa�a um programa que calcule a quantidade necess�ria de latas de tinta e o custo para
pintar um tanque cil�ndrico. Apresentar o custo com duas casas decimais. Se para a
quantidade de latas de tinta for obtido um resultado fracion�rio arredondar o n�mero para o
pr�ximo inteiro. Por exemplo: 5.2 apresentar 6 latas de tinta. A �rea a ser pintada �
calculada pela f�rmula: AREA = 2 * PI * raio2
 + 2 * PI * raio * altura. Uma lata de tinta
cont�m 3,6 litros e que cada litro de tinta � suficiente para pintar tr�s metros quadrados.
Observa��o: a fun��o int ceil (float num) faz arredondamento do n�mero para cima, ou
seja, para o pr�ximo inteiro. � necess�rio incluir essa biblioteca com # include <math.h>
Exemplo de uso:
Valor = ceil(Vari�vel);
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
