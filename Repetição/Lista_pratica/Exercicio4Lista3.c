/*4) Fazer um programa que leia um número de até três dígitos (considere que será fornecido
um número de até 3 dígitos), calcule e imprima a soma dos seus dígitos. Exemplo: 123 = 1
+ 2 + 3 = 6.
*/
#include<stdio.h>
int main (void)
{
    int num1, primeiro, segundo, terceiro, soma;

    printf("Informe um numero de ate 3 digitos: ");
    scanf("%d", &num1);

    primeiro = num1/100;
    segundo = (num1 % 100)/10;
    terceiro = num1%10;

    soma = primeiro+segundo+terceiro;

    printf("a soma dos numeros %d + %d + %d é: %d", primeiro, segundo, terceiro, soma);

}
