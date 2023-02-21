/*5) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e
mostrar (reutilizando variáveis):
a) A soma desses números;
b) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
e) O resto da divisão do primeiro pelo segundo.
O que é o resto da divisão? Por que o operador de resto somente pode ser utilizado com
operandos inteiros?*/

#include <stdio.h>
int main (void)
{
    int num1, num2;
    int respostaInt;
    float respostaFloat;

    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    respostaInt = num1 + num2;
    printf("%d + %d = %d\n",num1,num2,respostaInt);

    respostaInt = num1 - num2;
    printf("%d - %d = %d\n",num1,num2,respostaInt);

    respostaInt = num1 * num2;
    printf("%d * %d = %d\n",num1,num2,respostaInt);

    respostaInt = num1 / num2;
    printf("%d / %d = %d\n",num1,num2,respostaInt);

    respostaFloat = (float)num1 / num2;
    printf("%d / %d = %.2f\n", num1,num2,respostaFloat);

    respostaInt = num1 % num2; //% é o operador de resto
    printf("%d %% %d = %d \n", num1, num2, respostaInt);


}
