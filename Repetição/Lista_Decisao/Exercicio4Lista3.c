/*4) Faça um programa que leia três valores representando os lados de um triângulo.
Primeiro, coloque esses valores em ordem crescente, em seguida determine e mostre o
tipo de triângulo que esses lados formam de acordo com as seguintes definições. Para
essas definições a é o maior valor, b o do meio e c o menor.
Se a > b + c – valores não formam um triângulo;
Se a2 == b2 + c2 – triângulo retângulo;
Se a2 > b2 + c2 – triângulo obtusângulo;
Se a2 < b2 + c2 – triângulo acutângulo;
Se a == b == c – triângulo equilátero;
Se a == b e a != c, se a == c e a != b, e b == c e b != a – triângulo isósceles;
Se a != b != c – triângulo escaleno;
Observação: um mesmo triângulo pode ser classificado em mais de um tipo. Portanto,
utilizar ifs separados ao invés de ifs encadeados.*/
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
        printf("nValores não formam um triangulo\n");
    }
    else if((maior*maior) == ((meio*meio) + (menor*menor)))
    {
        printf("\nO triangulo é retangulo\n");
    }
    else if((maior*maior) > ((meio*meio) + (menor*menor)))
    {
        printf("\nO triangulo é obtusangulo\n");
    }
    else if((maior*maior) < ((meio*meio) + (menor*menor)))
    {
        printf("\nO triangulo é acutangulo\n");
    }
    else if(maior==meio && meio == menor)
    {
        printf("\nO triangulo é equilatero\n");
    }
    else if((maior==meio && maior != menor) || (maior==menor && maior != meio) || (meio==menor && meio != maior))
    {
        printf("\nO triangulo é isosceles\n");
    }
    else if((maior != meio) && (meio != menor))
    {
        printf("\nO triangulo é escaleno\n");
    }

    printf("%f > %f > %f", maior, meio, menor);
}
