/*3) O c�digo a seguir tem o objetivo de obter o resto da divis�o do n�mero maior pelo
menor (independentemente da ordem que foram informados) e apresentar que n�o �
poss�vel realizar a divis�o caso o divisor seja zero. Fa�a os ajustes necess�rios para que
esses objetivos sejam alcan�ados.
# include <stdio>
int main(void)
{
float Num1;
int Num2;
int Resto;
printf(�Informe o primeiro valor: �);
scanf(%d�,Num1);
printf(�Informe o segundo valor: �)
scanf(%d�,Num2);
if(Num1 > Num2)
{
Resto = Num1 % Num2;
}
else
{
Resto = Num2 % Num1;
}
else if (Num1 || Num2 == 0)
{
printf(�N�o � poss�vel realizar divis�o por zero�);
}
printf(�O resto da divis�o � %f\n�,Resto);
}*/
#include<stdio.h>
int main (void)
{
    int Num1, Num2;
    int Resto;

    printf("Informe o primeiro valor: ");
    scanf("%d", &Num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &Num2);

    if (Num1 == 0 || Num2 == 0)
    {
        printf("N�o � poss�vel realizar divis�o por zero");
    }

    else if(Num1 > Num2)
    {
        Resto = Num1 % Num2;
        printf("O resto da divis�o � %d\n", Resto);
    }
    else
    {
        Resto = Num2 % Num1;
        printf("O resto da divis�o � %d\n", Resto);
    }


}
