/*7) Ler uma série de números indicados pelo usuário até ser informado o valor zero.
Encontrar e mostrar o maior e o menor entre valores informados. O valor 0 indica o final
da leitura e não deve ser considerado.*/
#include<stdio.h>
int main (void)
{
    int num;
    int maior;
    int menor;
    char primeiro = 'n';//primeiro ainda nao foi informado

    do
    {
        printf("Informe um numero(zero para sair): ");
        scanf("%d", &num);

        if(num != 0)//se podemos processar a entrada
        {
            if(primeiro == 'n')//primeiro valor ainda nao informado
            {
                maior=num;
                menor=num;
                primeiro = 's';
            }
            else //2o, 3o, 4o...
            {
                if(num>maior)
                {
                    maior = num;
                }
                else if(num < menor)
                {
                    menor = num;
                }
            }
        }
    }while(num !=0);//para saber se ira repetir

    if(primeiro == 's')
    {
        printf("maior: %d e menor: %d\n", maior, menor);
    }
}
