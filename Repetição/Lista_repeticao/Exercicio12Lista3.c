/*12) Fa�a um programa que imprima os 'n' (indicado pelo usu�rio) primeiros n�meros
pares e nao divisiveis por 5. Apresentar cinco valores por linha.
Por exemplo, se o usu�rio informar 10, mostrar:
0 2 4 6 8 //primeira linha com cinco n�meros
10 12 14 16 18 // segunda linha com cinco n�meros.*/
#include<stdio.h>
int main(void)
{
    int qtdmostrar;
    int qtdjamostrados = 0;
    int aux=1;

    //validar entrada. Obrigar o usuario a informar um valor > zero
    do
    {
        printf("Quantos numeros mostrar?: ");
        scanf("%d", &qtdmostrar);

        if( qtdmostrar <=0)
        {
            printf("O numero deve ser positivo. Informe novamente\n");
        }
    }
    while ( qtdmostrar <=0);

    do
    {
        if(aux%2==0 && aux%5!=0)
        {
            printf("%d\t", aux);
            qtdjamostrados++;
            if( qtdjamostrados % 5 ==0)
            {
                printf("\n");
            }
        }
        aux++;
    }
    while(qtdjamostrados < qtdmostrar);

}
