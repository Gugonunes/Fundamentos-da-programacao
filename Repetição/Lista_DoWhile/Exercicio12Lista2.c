/*12) Elaborar um programa que valide o n�mero de uma conta corrente com tr�s d�gitos e
retorne o d�gito verificador e informe se o n�mero da conta est� correto. O n�mero da
conta � informado da seguinte maneira:
1234. Sendo 123 o n�mero da conta e 4 o d�gito verificador.
1112. Sendo 111 o n�mero da conta e 2 o d�gito verificador.
Ler os quatro d�gitos como um �nico n�mero. Separe os d�gitos de forma a que os tr�s
primeiros sejam o n�mero da conta e o �ltimo o d�gito verificador. O usu�rio deve
informar um n�mero com 4 d�gitos. Valide a entrada, ou seja, repetir a entrada do n�mero
at� que seja informado um n�mero com quatro d�gitos.
Para obter o d�gito verificador:
a) somar o n�mero da conta com o seu inverso = 123 + 321 = 444
b) multiplicar cada d�gito pela sua ordem posicional e somar os resultados = 4 *1
+ 4 * 2 + 4 * 3 = 24
c) O �ltimo d�gito desse resultado � o verificador: 4*/
#include<stdio.h>
int main(void)
{
    int num, numconta, verificador, verificadorconta, i, qtd;
    int primeiro, segundo, terceiro, inverso, primeiro2, segundo2, terceiro2;
    int soma, soma2;
    char repetir;
    do
    {
        system("cls");

        do
        {
            printf("Informe o numero da conta com o digito verificador no final(ex 1234 para 123-4): ");
            scanf("%d", &num);

            qtd=0;
            for(i=num; i>0; i= i/10)
            {
                qtd++;
            }
        }while(qtd!=4);

        numconta = num/10;
        verificador = num%10;

        //primeiro, segundo e terceiro digito
        primeiro = numconta/100;
        segundo = (numconta%100)/10;
        terceiro = numconta%10;
        //soma
        inverso = terceiro*100 + segundo*10 + primeiro;
        soma = numconta + inverso;
        //soma2 pelo posicional
        primeiro2 = soma/100;
        segundo2 = (soma%100)/10;
        terceiro2 = soma%10;

        soma2 = primeiro2 + segundo2*2 + terceiro2 * 3;
        //verificador da conta
        verificadorconta = soma2%10;
        if(verificador == verificadorconta)
        {
            printf("\nNumero da conta esta correto");
        }
        else
        {
            printf("\nNumero da conta esta incorreto");
        }

        printf("\n\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir =='s' || repetir =='S');
    system("pause");
    return(0);

}
