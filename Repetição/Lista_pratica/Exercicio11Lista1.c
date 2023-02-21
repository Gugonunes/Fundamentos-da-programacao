/* 11) Resolva as seguintes express�es matem�ticas. X e Y s�o valores fornecidos pelo
usu�rio. Calcule e mostre o resultado de cada express�o.
Aten��o para os resultados que podem ser valores float e para a prioridade dos
operadores.
Primeiro linearizar as express�es depois implementar o algoritmo para calcular o
resultado.
*/

#include <stdio.h>

int main (void)
{
    float x, y;
    float respostaFloat;
    int resto;

    printf("Informe o valor para x: ");
    scanf("%f", &x);

    printf("Informe o valor para y: ");
    scanf("%f", &y);

    respostaFloat = (x + y)/y * (x*x);
    printf("a) %.2f\n", respostaFloat);

    respostaFloat = (x+y)/(x-y);
    printf("b) %.2f\n", respostaFloat);

    respostaFloat = (x*x + y*y*y)/2;
    printf("c) %.2f\n", respostaFloat);

    respostaFloat = (x*x*x)/(x*x);
    printf("d) %.2f\n", respostaFloat);

    resto = (int)x % (int)y;
    printf("e) %.0f %% %.0f: %d\n", x, y, resto);

    resto = (int)x % 3;
    printf("f) %.0f %% 3: %d\n", x, resto);

    resto = (int)y % 5;
    printf("g) %.0f %% 5: %d\n", y, resto);


}
