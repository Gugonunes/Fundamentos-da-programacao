/*1) Uma �rvore A tem 1,50 metros e cresce 2 cent�metros por ano, enquanto uma �rvore
B tem 1,10 metros e cresce 3 cent�metros por ano. Construa um algoritmo que calcule e
imprima quantos anos ser�o necess�rios para que B seja maior que A.*/
#include<stdio.h>
int main(void)
{
    float a=1.50, b=1.10;
    int qtd=0;

    do
    {
        a=a+0.2;
        b=b+0.3;
        qtd++;
    }while(b<a);
    printf("Demora %d anos", qtd);

}
