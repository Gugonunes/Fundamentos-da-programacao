/*7) Ler um n�mero inteiro longo (long int) que representa segundos e convert�-lo para horas,
minutos e segundos. Mostrar a quantidade de horas, minutos e segundos obtidos, no
seguinte formato: xhoras:yminutos:zsegundos.
Exemplo:
informado o valor 3725
apresentar
1hora:2minutos:5segundos
Observa��o:
//declarar uma vari�vel inteiro longo
long int Num;
//ler uma vari�vel inteiro longo
scanf(�%li�,&Num);
//mostrar o conte�do de uma vari�vel inteiro longo
printf(�valor %li�,Num);*/

#include <stdio.h>

int main(void)
{
    long int num1;
    long int resultado1, resultado2, resultado3;

    printf("Informe o numero em segundo: ");
    scanf("%li", &num1);

    resultado1 = num1/3600;
    resultado2 = (num1 - resultado1*3600)/60;
    resultado3 = num1 - (resultado1*3600) - (resultado2 * 60);

    printf("\nO tempo � de %d : %d : %d\n", resultado1, resultado2, resultado3);


}
