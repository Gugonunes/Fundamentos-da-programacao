/*9) Ler um número que indica a quantidade de ímpares, divisiveis por 7 e nao divisiveis por 5 iniciando um que deve ser
mostrada. O valor informado para a quantidade deve ser positivo. Validar a entrada.*/
#include<stdio.h>
int main(void)
{
    int qtdmostrar;
    int qtdjamostrados=0;
    int aux=1;

    //validar entrada
    do
    {
        printf("Quantos numeros mostrar?: ");
        scanf("%d", &qtdmostrar);
        if( qtdmostrar <= 0)
        {
            printf("O valor deve ser positivo\n");
        }
    }while(qtdmostrar <= 0);

    while( qtdjamostrados < qtdmostrar)
    {
        if(aux%2 != 0 && aux%7==0 && aux%5 !=0)
        {
            printf("%d\t", aux);
            qtdjamostrados++;
            if( qtdjamostrados %8 ==0)
            {
                printf("\n");
            }
        }
        aux++;
    }
}
