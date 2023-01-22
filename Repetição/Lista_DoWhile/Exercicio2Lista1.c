/*2) Uma pessoa aplicou R$ 1000,00 com rendimento de 5% ao mês. Quantos meses serão
necessários para que o capital investido ultrapasse R$ 1200,00.*/
#include<stdio.h>
int main(void)
{
    float i=1000.00;
    int qtd=0;

    do
    {
        i=i+(i*5/100);
        qtd++;
    }while(i<1200);
    printf("demorou %d meses", qtd);
}
