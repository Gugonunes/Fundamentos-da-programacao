/*4) Ler o gênero (F ou f para feminino, M ou m para masculino. Para qualquer outro
caractere informar que não há fórmula disponível e finalizar o programa). Se
informado um caractere válido, ler a altura da pessoa e calcular seu peso ideal,
utilizando as seguintes fórmulas:
a) para homens: (72,7 * h) - 58;
b) para mulheres: (62,1 * h) - 44,7.
Observação, para ler caractere e comparar variável do tipo caractere:
char Pessoa;
scanf(“%c”,&Pessoa);
if (Pessoa == ‘f’ || Pessoa == ‘F’)*/
#include <stdio.h>
int main (void)
{
    char genero;
    float alt, peso;

    printf("Informe o genero (f ou F para feminino, m ou M para masculino): ");
    scanf("%c", &genero);

    if( genero != 'f' && genero != 'F' && genero != 'm' && genero != 'M')
    {
        printf("fon\n");
        return(0);
    }

    if( genero == 'f' || genero == 'F')
    {
        printf("Informe a altura: ");
        scanf("%f", &alt);

        peso = (62.1 * alt) - 44.7;
        printf("O peso ideal para voce é: %f", peso);
    }
    else
    {
        printf("Informe a altura: ");
        scanf("%f", &alt);

        peso = (72.7 * alt) - 58;
        printf("O peso ideal para voce é: %f", peso);
    }
}

