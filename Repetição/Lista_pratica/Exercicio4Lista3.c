/*4) Fazer um programa que leia um n�mero de at� tr�s d�gitos (considere que ser� fornecido
um n�mero de at� 3 d�gitos), calcule e imprima a soma dos seus d�gitos. Exemplo: 123 = 1
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

    printf("a soma dos numeros %d + %d + %d �: %d", primeiro, segundo, terceiro, soma);

}
