/*9) Ler n�meros inteiros informados pelo usu�rio at� ser informado um valor negativo. Dentre
os n�meros informados, exceto o valor negativo que � a condi��o de sa�da:
a) contar a quantidade de n�meros menores que 10 e os maiores que 100;
b) contar a quantidade de n�meros �mpares;
c) contar a quantidade de n�meros entre 10 e 100;
d) contar quantas vezes � informado um n�mero diferente de 10, de 20 e de 30.*/
#include<stdio.h>
int main(void)
{
    int i, qtdmenor10=0, qtdmaior100=0, qtdimpar=0, qtdentre10e100=0, qtddif102030=0;

    for(i=1;i>0;)
    {
        printf("Informe um numero: ");
        scanf("%d", &i);

        if(i>=0)
        {
            if(i<10)
            {
              qtdmenor10++;
            }
            if(i>100)
            {
              qtdmaior100++;
            }
            if(i%2!=0)
            {
              qtdimpar++;
            }
            if(i>10 && i<100)
            {
              qtdentre10e100++;
            }
            if(i!=10 || i!=20 || i!=30)
            {
              qtddif102030++;
            }
        }

    }
    printf("Quantidade de menores que 10: %d\n", qtdmenor10);
    printf("Quantidade de maiores que 100: %d\n", qtdmaior100);
    printf("Quantidade de impares: %d\n", qtdimpar);
    printf("Quantidade de numeros entre 10 e 100: %d\n", qtdentre10e100);
    printf("Quantidade de numeros diferentes de 10, 20 ou 30: %d\n", qtddif102030);

}
