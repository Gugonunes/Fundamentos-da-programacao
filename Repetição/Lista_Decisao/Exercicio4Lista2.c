/*4) Ler o g�nero (F ou f para feminino, M ou m para masculino. Para qualquer outro
caractere informar que n�o h� f�rmula dispon�vel e finalizar o programa). Se
informado um caractere v�lido, ler a altura da pessoa e calcular seu peso ideal,
utilizando as seguintes f�rmulas:
a) para homens: (72,7 * h) - 58;
b) para mulheres: (62,1 * h) - 44,7.
Observa��o, para ler caractere e comparar vari�vel do tipo caractere:
char Pessoa;
scanf(�%c�,&Pessoa);
if (Pessoa == �f� || Pessoa == �F�)*/
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
        printf("O peso ideal para voce �: %f", peso);
    }
    else
    {
        printf("Informe a altura: ");
        scanf("%f", &alt);

        peso = (72.7 * alt) - 58;
        printf("O peso ideal para voce �: %f", peso);
    }
}

