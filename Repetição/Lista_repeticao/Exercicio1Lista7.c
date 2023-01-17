/*1) Um determinado material radioativo perde metade de sua massa a cada 500 segundos.
Dada a massa inicial, em gramas, fazer um programa que determine o tempo necess�rio
para que essa massa se torne menor que 0,05 gramas. Escreva a massa inicial, a massa
final e o tempo calculado em horas, minutos e segundos. A massa inicial informada pelo
usu�rio tem que ser maior que zero. Validar essa entrada, isto �, ficar repetindo a leitura
da massa inicial at� que o usu�rio informe um valor v�lido, ou seja, maior que zero.*/
#include<stdio.h>
int main (void)
{
    float tempo=0, massa;

    do
    {
        printf("Informe a massa do material: ");
        scanf("%f", &massa);

    }while(massa<=0);

    printf("\nMassa Inicial: %.2f", massa);

    while(massa>=0.05)
    {
        massa = massa/2;
        tempo = tempo + 500;
    }
    tempo = tempo/3600;
    printf("\nMassa Final: %.2f\n\nTempo: %.2f", massa, tempo);

}
