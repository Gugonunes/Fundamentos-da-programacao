/*14) Implemente um cronômetro, apresentando dados de horas, minutos e segundos da
seguinte forma: 00:00:00. O cronômetro inicia com 00:00:00 e quando chegar a
23:59:59, deverá ir para 00:00:00.*/
#include<stdio.h>
int main (void)
{
    int h, m, s;

    for(h=0; h<=24; h++)
    {
        if(h==24)
        {
            h=0;
        }
        for(m=0; m<60; m++)
        {
            for(s=0; s<60; s++)
            {
                printf("%d:%d:%d\n", h, m, s);
            }
        }
    }
}

