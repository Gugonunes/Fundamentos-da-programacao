/*11) Ler um n�mero inteiro e determinar se o mesmo � primo. Um n�mero � primo
quando � divis�vel de maneira exata somente por 1 e por ele mesmo.*/
#include<stdio.h>
int main(void)
{
    int numero;
    int i;
    int qtd=0;

    printf("Informe um numero para verificar se � primo: ");
    scanf("%d", &numero);

    /*ideia: dividir d 2 at� a metade do numero, se encontra uma divisao exata sair do for. Poderiamos tambem
dividir de 2 at� a raiz quadrada do numero*/

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
        printf("%d � primo\n", numero);
    }
    else //encontrada uma divisao exata
    {
        printf("%d nao � primo\n", numero);
    }
}
