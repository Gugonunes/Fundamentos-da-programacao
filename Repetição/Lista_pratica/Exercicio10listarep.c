/*10) Uma indústria fabrica roupas categorizadas em masculinas, femininas e infantis. Ler
a categoria (M, F ou I) e a respectiva quantidade. Calcular:
a) O total de produtos por categoria;
b) O percentual de produtos da categoria infantil;
Validar para que seja informada uma categoria válida. Finalizar a leitura quando
informado um valor negativo para a quantidade. Ler inicialmente a quantidade e depois a
categoria. Se informada uma quantidade negativa não ler a categoria.*/
#include<stdio.h>
int main(void)
{
    char categoria;
    int qtd=1;//só para tornar o while verdadeiro na primeira vez;
    int totalM=0;
    int totalF=0;
    int totalI=0;
    int totalGeral;
    float percentual;

    while( qtd > 0)
    {
        printf("Informe a quantidade: ");
        scanf("%d", &qtd);

        if( qtd>0)
        {
            do//validar entrada
            {
                printf("Informe a categoria: ");
                fflush(stdin);
                scanf("%c", &categoria);

            }while( categoria!='m' && categoria!='f' && categoria!='i' && categoria!='M' && categoria!='F' && categoria!='I');

            if(categoria =='f' || categoria =='F')
            {
                totalF = totalF + qtd;
            }
            else if(categoria == 'm' || categoria == 'M')
            {
                totalM = totalM + qtd;
            }
            else
            {
                totalI = totalI+qtd;
            }
        }
    }//fim do while
    totalGeral = totalF+totalM+totalI;
    percentual = totalI*100.0/totalGeral;
    printf("Percentual infantil: %.2f\n", percentual);
    printf("Total M: %d \n Total F: %d \n Total I: %d\n", totalM,totalF,totalI);
}
