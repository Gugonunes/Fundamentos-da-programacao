/*4) Escreva um programa que determine o valor de S, com n informado pelo usuário, da
série S = 1/1 – 2/4 + 3/9 – n / n^2. Para n = 10:
S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36 + ... - 10/100.*/
#include<stdio.h>
int main(void)
{
    int i, num, qtd=0, potencia;
    float soma=0;

    do
    {
        printf("Informe um numero: ");
        fflush(stdin);
        scanf("%d", &num);

    }while(num<0);

    for(i=1; i<=num; i++)
    {
      if(i%2==0 && i!=num)
      {
          soma = soma - (float)i/(i*i);
          printf("%d/%d +", i, i*i);
      }
      else if(i%2!=0 && i!=num)
      {
          soma = soma + (float)i/(i*i);
          printf("%d/%d -", i, i*i);

      }
      if(i==num)
      {
          printf("%d/%d --->", i, i*i);
          if(i%2==0)
          {
              soma = soma - (float)i/(i*i);
          }
          else
          {
              soma = soma + (float)i/(i*i);
          }
      }
    }
    printf("%.2f", soma);
}
