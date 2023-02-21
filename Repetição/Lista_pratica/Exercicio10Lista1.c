/*Um eletricista precisa comprar fio que irá passar pela diagonal de uma casa de
formato retangular. Como ele não tem condições de medir a diagonal com precisão, uma
solução alternativa é medir os lados da casa. A diagonal pode ser calculada a partir dos
lados pelo Teorema de Pitágoras (a2 = b2 + c2
). Faça um algoritmo que calcule a
quantidade mínima necessária de fio a ser comprada. Apresente também a quantidade
mínima em metros inteiros. Por exemplo: resultado do cálculo 18.35, apresentar 19
metros.*/

#include <stdio.h>
#include <math.h> //biblioteca que contem funcoes matematicas

int main(void)

{
    float ladoA, ladoB, hipo;
    int metros;

    printf("Informe o valor de um dos lados: ");
    scanf("%f", &ladoA);

    printf("Informe o valor do outro lado: ");
    scanf("%f", &ladoB);

    hipo = sqrt((ladoA * ladoA) + (ladoB * ladoB)); //pow(base, exploente) é uma funcao que faz a mesma coisa

    printf("Hipotenusa: %f\n", hipo);

    metros = hipo + 0.999999; //se há parte decimal em hipo ira para o proximo inteiro.
    //metros = ceil(hipo) //arredondar para o proximo inteiro

    printf("Serao necessario %d metros de fio\n", metros);





}

