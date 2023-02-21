/*3) Leia um valor float que representa o troco a ser fornecido por um caixa. Separe a parte
inteira (reais) da parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos.*/
#include<stdio.h>

int main (void)
{
    float troco, resultado2;
    int resultado;

    printf("Informe o troco (ex: 15.3 para 15 reais e 30 centavos): ");
    scanf("%f", &troco);

    resultado = (int)troco;
    resultado2 = (troco - resultado)*100;

    printf("O troco foi de: %d reais e %f centavos", resultado, resultado2);
}
