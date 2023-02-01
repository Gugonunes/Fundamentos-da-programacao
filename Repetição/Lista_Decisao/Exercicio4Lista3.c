/*4) Fa�a um programa que leia tr�s valores representando os lados de um tri�ngulo.
Primeiro, coloque esses valores em ordem crescente, em seguida determine e mostre o
tipo de tri�ngulo que esses lados formam de acordo com as seguintes defini��es. Para
essas defini��es a � o maior valor, b o do meio e c o menor.
Se a > b + c � valores n�o formam um tri�ngulo;
Se a2 == b2 + c2 � tri�ngulo ret�ngulo;
Se a2 > b2 + c2 � tri�ngulo obtus�ngulo;
Se a2 < b2 + c2 � tri�ngulo acut�ngulo;
Se a == b == c � tri�ngulo equil�tero;
Se a == b e a != c, se a == c e a != b, e b == c e b != a � tri�ngulo is�sceles;
Se a != b != c � tri�ngulo escaleno;
Observa��o: um mesmo tri�ngulo pode ser classificado em mais de um tipo. Portanto,
utilizar ifs separados ao inv�s de ifs encadeados.*/
#include <stdio.h>
int main (void)
{
    float lado1, lado2, lado3, maior, meio, menor;

    printf("Informe o lado 1: ");
    scanf("%f", &lado1);

    printf("Informe o lado 2: ");
    scanf("%f", &lado2);

    printf("Informe o lado 3: ");
    scanf("%f", &lado3);

    if((lado1 > lado2 && lado1 > lado3) && (lado2 < lado1 && lado2 > lado3))
    {
        maior = lado1;
        meio = lado2;
        menor = lado3;
    }
    else if((lado1 > lado2 && lado1 > lado3) && (lado3 < lado1 && lado3 > lado2))
    {
        maior = lado1;
        meio = lado3;
        menor = lado2;
    }
    else if((lado2 > lado1 && lado2 > lado3) && (lado3 > lado1 && lado3 < lado2))
    {
        maior = lado2;
        meio = lado3;
        menor = lado1;
    }
    else if((lado2 > lado1 && lado2 > lado3) && (lado1 > lado3 && lado1 < lado2))
    {
        maior = lado2;
        meio = lado1;
        menor = lado3;
    }
    else if((lado3 > lado1 && lado3 > lado1) && (lado2 > lado1 && lado2 < lado3))
    {
        maior = lado3;
        meio = lado2;
        menor = lado1;
    }
    else
    {
        maior = lado3;
        meio = lado1;
        menor = lado2;
    }

    if(maior > meio + menor)
    {
        printf("nValores n�o formam um triangulo\n");
    }
    else if((maior*maior) == ((meio*meio) + (menor*menor)))
    {
        printf("\nO triangulo � retangulo\n");
    }
    else if((maior*maior) > ((meio*meio) + (menor*menor)))
    {
        printf("\nO triangulo � obtusangulo\n");
    }
    else if((maior*maior) < ((meio*meio) + (menor*menor)))
    {
        printf("\nO triangulo � acutangulo\n");
    }
    else if(maior==meio && meio == menor)
    {
        printf("\nO triangulo � equilatero\n");
    }
    else if((maior==meio && maior != menor) || (maior==menor && maior != meio) || (meio==menor && meio != maior))
    {
        printf("\nO triangulo � isosceles\n");
    }
    else if((maior != meio) && (meio != menor))
    {
        printf("\nO triangulo � escaleno\n");
    }

    printf("%f > %f > %f", maior, meio, menor);
}
