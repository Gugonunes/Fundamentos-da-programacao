/*1) Elaborar um programa para subtrair duas datas. Apresentar o resultado, a diferen�a, em
anos, meses e dias. O usu�rio pode informar as datas em ordem crescente ou decrescente,
caber� ao programa fazer a verifica��o para subtrair a data menor da data maior.
Observa��o: para facilitar considere que os meses possuem 30 dias e assim todos os anos
possuem 360 dias. Para ler um valor no formato data armazenando-o em tr�s vari�veis
distintas � poss�vel utilizar o scanf com a seguinte sintaxe:
scanf(�%d/%d/%d�,&dia,&m�s,&ano); Observar a barra entre o 1� e o 2� e entre
o 2� e o 3� s�mbolos de %
O usu�rio digitar� a data no formato: 12/12/2008, incluindo as barras, e cada
vari�vel ter� o seu respectivo valor armazenado.*/
#include<stdio.h>
int main (void)
{
    int total, total1, total2, dia1, mes1, ano1, dia2, mes2, ano2, dia, mes, ano;

    printf("Informe o dia, o mes e o ano (ex: 12/10/2011): ");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);

    printf("Informe o dia, o mes e o ano (ex: 12/10/2011): ");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    total1 = (ano1*360) + (mes1*30) + dia1;
    total2 = (ano2*360) + (mes2*30) + dia2;

    if(total1<=total2)
    {
        total = (total2)-(total1);
        ano = (total/360);
        mes = (total % 360)/30;
        dia = (total%360%30);

        printf("%d/%d/%d\n", dia, mes, ano);
    }
    else
    {
        total = (total1)-(total2);
        ano = (total/360);
        mes = (total % 360)/30;
        dia = (total%360%30);

        printf("%d/%d/%d\n", dia, mes, ano);
    }

}

