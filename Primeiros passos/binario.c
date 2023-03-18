#include<stdio.h>
#include<math.h>
void main (){
	int alg1, alg2, alg3, alg4;
	printf("Digite o primeiro numero: ");
	scanf("%d", &alg1);
	printf("Digite o segundo numero: ");
	scanf("%d", &alg2);
	printf("Digite o  terceiro numero: ");
	scanf("%d", &alg3);
	printf("Digite o quarto numero: ");
	scanf("%d", &alg4);
	int binario = ( alg1 * pow(2,3)) + (alg2 * pow(2,2)) + ( alg3 * pow(2,1) ) + (alg4 * pow(2,0));
	printf(" a resposta e %d", binario);
}
