/*Um eletricista precisa comprar fio que ir� passar pela diagonal de uma casa de
formato retangular. Como ele n�o tem condi��es de medir a diagonal com precis�o, uma
solu��o alternativa � medir os lados da casa. A diagonal pode ser calculada a partir dos
lados pelo Teorema de Pit�goras (a2 = b2 + c2
). Fa�a um algoritmo que calcule a
quantidade m�nima necess�ria de fio a ser comprada. Apresente tamb�m a quantidade
m�nima em metros inteiros. Por exemplo: resultado do c�lculo 18.35, apresentar 19
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

    hipo = sqrt((ladoA * ladoA) + (ladoB * ladoB)); //pow(base, exploente) � uma funcao que faz a mesma coisa

    printf("Hipotenusa: %f\n", hipo);

    metros = hipo + 0.999999; //se h� parte decimal em hipo ira para o proximo inteiro.
    //metros = ceil(hipo) //arredondar para o proximo inteiro

    printf("Serao necessario %d metros de fio\n", metros);





}

