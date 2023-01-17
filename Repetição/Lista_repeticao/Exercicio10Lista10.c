/*10) Foi realizada uma pesquisa entre os habitantes de uma região e coletados os dados de altura e
trabalho (0=não trabalha, 1=trabalha) das pessoas. Faça um programa que leia os dados de x
pessoas e informe:
• a maior e a menor altura encontradas;
• a média de altura das pessoas que trabalham;
• a média de altura da população;
• o percentual das pessoas que não trabalham na população.
Dica: a saída (parar a entrada de dados) é definida quando o usuário informar um valor 0 ou
negativo para a altura. Quando isso ocorrer não ler os demais dados e apresentar as estatísticas
solicitadas.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char repetir;
    int alt, trab;
    int maior, menor;
    char primeiro;
    int qtd, soma, somat, qtdt;
    float media, mediat;
    float percentual;


    do
    {
        system("cls");
        //
        primeiro = 's';
        somat = 0;
        qtdt=0;
        soma=0;
        qtd=0;
        maior = 0;
        menor = 0;

        do
        {
           printf("Informe a altura do individuo: ");
           scanf("%d", &alt);
           if(alt>0)
           {
               do
               {
                   printf("\nO cidadao e de bem(trabalha)? (0 para nao e 1 para sim): ");
                   scanf("%d", &trab);

               }while(trab!=0 && trab!=1);

               //maior e menor
               if(primeiro == 's')
               {
                   maior = alt;
                   menor = alt;
                   primeiro = 'j';
               }
               else
               {
                   if(alt>maior)
                   {
                       maior=alt;
                   }
                   else if(alt<menor);
                   {
                       menor = alt;
                   }
               }

               //media das alturas dos que trabalham;
               if(trab == 1)
               {
                   soma = soma + alt;
                   qtd++;
               }
               // media da altura da população;
               somat = somat + alt;
               qtdt++;
               //percentual dos que nao trabalham
               percentual= (qtdt-qtd)*100/qtdt ;
           }

        }while(alt>0);


        printf("\nMaior altura: %d\nMenor altura: %d", maior, menor);

        if(qtd != 0 )
        {
            media = soma/qtd;
            printf("\n\nMedia da altura dos cidadaos de bem: %.2f", media);
        }

        if(qtdt !=0)
        {
            mediat = somat/qtdt;
            printf("\n\nMedia de altura da populacao: %.2f", mediat);
        }
        printf("\n\nPercentual de vagabundos: %.2f", percentual);

        printf("\nExecutar novamente? ");
        fflush(stdin);
        scanf("%c", &repetir);
    }while(repetir=='s' || repetir=='S');
    system("pause");
    return(0);
}
