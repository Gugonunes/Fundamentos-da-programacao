/*6) Ler caracteres parar quando o usu�rio informar o caractere '0'. Utilizando a tabela
ASCII contar quantos caracteres s�o letras mai�sculas e quantos s�o letras min�sculas.
Sugest�o: utilizar o c�digo num�rico para comparar. Exemplo: A equivale a 65, B a 66...*/
#include<stdio.h>
int main(void)
{
    char letra;
    int qtd=0, qtdm=0;

    do
    {
        printf("Informe uma letra: ");
        fflush(stdin);
        scanf("%c", &letra);

        if(letra!=48)
        {
            if(letra>=65 && letra<=90)
            {
                qtd++;
            }
            else if(letra>=97 && letra<=122)
            {
                qtdm++;
            }
        }
    }while(letra!=48);
    printf("Quantidade Maiusculas: %d\nQuantidade Minusculas: %d ", qtd, qtdm);
}
