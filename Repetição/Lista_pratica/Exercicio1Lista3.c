/*1) Ler um número float. Separar a parte inteira e a parte decimal desse número. Apresentar
a parte decimal como um valor float e como um inteiro de três dígitos. Da parte inteira
separar o número representa unidade, dezena e centena e mostrar. Exemplo:
Informado o valor 123.456
Mostrar:
Parte inteira: 123
Parte decimal: 0.456
Parte decimal como inteiro de três dígitos: 456
Unidade: 1
Dezena: 2
Centena: 3*/

#include <stdio.h>

int main (void)
{
    float num;
    int parteinteira;
    float partedecimal;
    int partedecimalcomoint;
    int unidade;
    int dezena;
    int centena;

    printf("Informe um numero float: ");
    scanf("%f", &num);

    parteinteira = (int)num;
    partedecimal = num - (int)num;
    partedecimalcomoint = partedecimal*100;

    centena = partedecimalcomoint/100;
    dezena = partedecimalcomoint%100/10;
    unidade = partedecimalcomoint%100%10; //partedecimalcomoint%10;

    printf("Parte inteira: %d\n", parteinteira);
    printf("Parte decimal: %f\n", partedecimal);
    printf("Parte decimal como inteiro: %d\n", partedecimalcomoint);
    printf("Unidade: %d\n", unidade);
    printf("Dezena: %d\n", dezena);
    printf("Centena: %d\n", centena);



}
