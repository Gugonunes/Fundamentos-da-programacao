/*5) Ler um caractere que deve ser 'A' , 'B' ou 'C'. Parar a leitura quando o usuário informar
um desses três caracteres. Contar quantas tentativas foram feitas, ou seja, quantos
caracteres foram informados incorretos.*/
#include<stdio.h>
int main(void)
{
    int i, qtd=0;
    char letra;

    do
    {
        printf("Informe uma letra: ");
        fflush(stdin);
        scanf("%c", &letra);

        if(letra!='A' && letra!='B' && letra!='C')
        {
            qtd++;
        }
    }while(letra!='A' && letra!='B' && letra!='C');
    printf("Tentativas= %d", qtd);

}
