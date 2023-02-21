/*5) Escrever um algoritmo que lê a hora e os minutos de início e a hora e os minutos do final
do jogo e calcula a duração do jogo, sabendo-se que o tempo máximo de duração do jogo é
de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.*/
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int horainicial, horafinal;
    int minutoinicial, minutofinal;
    int diferencahora, diferencaminuto;

    printf("Informe o horario inicial do jogo no formato hh:mm ");
    scanf("%d:%d", &horainicial, &minutoinicial);

    printf("Informe o horario final do jogo no formato hh:mm ");
    scanf("%d:%d", &horafinal, &minutofinal);

    if( minutofinal < minutoinicial) //necessario emprestar uma hora
    {
        minutofinal = minutofinal + 60;
        horafinal = horafinal - 1;
    }

    diferencaminuto = minutofinal - minutoinicial;

    if( horafinal > horainicial) // jogo terminou no dia seguinte
    {
        diferencahora = 24 - horainicial + horafinal;
    }
    else
    {
        diferencahora = horafinal - horainicial;
    }
    printf("duração do jogo: %dh:%d\n", diferencahora, diferencaminuto);
    system("pause");
    return (0);
}
