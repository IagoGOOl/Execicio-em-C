#include <stdio.h>
#include <math.h>

void main()
{
    float sen, quadrado, raiz, cos;
    printf("Digite o valor do seno\n");
    scanf("%f", &sen);
    quadrado = pow(sen, 2);
    cos =  1 - quadrado;
    raiz = sqrt(cos);
    printf("O valor do cosseno eh: %f", raiz);
}
