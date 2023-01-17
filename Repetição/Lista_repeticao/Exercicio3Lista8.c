/*3) Alice e Beto são amigos e sempre que se encontram relembram os tempos de
infância tirando par-ou-ímpar para decidir quem escolhe o filme a ser assistido, ou qual o restaurante em que
vão almoçar, etc. Escreva um programa para determinar que ganhou a série de par-ou-ímpar.
Entrada
A primeira entrada deve ser um valor que identifica a quantidade de jogos realizados, identificada pela variável ‘n’.
A seguir deve-se ler os ‘n’ resultados dos jogos. Se Ri = 0 significa que Alice ganhou o i-ésimo jogo e se Ri = 1 Beto
ganhou o i-ésimo jogo.*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int num;
    int i;
    int vencedor;
    int qtdalice, qtdbeto;

    do
    {
        system("cls");
        //

        qtdalice = 0;
        qtdbeto = 0;

        printf("Informe a quantidade de jogos: ");
        scanf("%d", &num);

        for(i=1; i<=num; i++)
        {
            do
            {
                printf("%dº resultado de %d (0 para Alice e 1 para Beto): ", i, num);
                scanf("%d", &vencedor);
            }while(vencedor !=0 && vencedor!=1);

            if(vencedor == 0)
            {
                qtdalice++;
            }
            else
            {
                qtdbeto++;
            }
        }
        printf("Alice ganhou %d e Beto ganhou %d jogos", qtdalice, qtdbeto);

        printf("\n\nDeseja executar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir == 'S' || repetir == 's');

    system("pause");
    return(0);
}
