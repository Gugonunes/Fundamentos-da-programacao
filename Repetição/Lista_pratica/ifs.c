// uso do if

#include <stdio.h>//biblioteca

int main (void)
{
    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if(num == 5)
    {
        printf("%d == 5\n", num);
    }
    if(num < 5)
    {
        printf("%d < 5\n", num);
    }
    if(num <= 5 )
    {
        printf("%d <= 5\n", num);
    }
    if(num > 5)
    {
        printf("%d > 5\n", num);
    }
    if(num >= 5)
    {
        printf("%d >= 5\n", num);
    }
    if(num != 5)
    {
        printf("%d != 5\n", num);
    }
    if(num != 5 && num != 9)
    {
        printf("%d != 5 && %d !=9\n", num, num);
    }
    if(num == 5 || num == 9)
    {
        printf("%d == 5 || %d ==9\n", num, num);
    }
    if(num < 5 || num > 9)
    {
        printf("%d <5 || %d>9\n", num, num);
    }
    if(num >= 5 && num <= 9)
    {
        printf("%d >= 5 && %d<=9\n", num, num);
    }

}


