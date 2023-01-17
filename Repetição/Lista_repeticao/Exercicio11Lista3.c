/*11) Ler um número inteiro e determinar se o mesmo é primo. Um número é primo
quando é divisível de maneira exata somente por 1 e por ele mesmo.*/
#include<stdio.h>
int main(void)
{
    int numero;
    int i;
    int qtd=0;

    printf("Informe um numero para verificar se é primo: ");
    scanf("%d", &numero);

    /*ideia: dividir d 2 até a metade do numero, se encontra uma divisao exata sair do for. Poderiamos tambem
dividir de 2 até a raiz quadrada do numero*/

    for(i=2; i<=numero/2; i++)
    {
        if(numero % i ==0)
        {
            qtd++;
            i=numero; //para sair do for. //break
        }
    }
    if(qtd ==0)//nao encontradas divisoes exatas
    {
        printf("%d é primo\n", numero);
    }
    else //encontrada uma divisao exata
    {
        printf("%d nao é primo\n", numero);
    }
}
