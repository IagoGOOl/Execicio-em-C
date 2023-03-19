#include<stdio.h>
void main (){
	float consumo, conta;
	const int cover = 10;
	printf(" informe o valor da conta");
	scanf("%f", &consumo);
	conta = consumo + (consumo * 0,07);
	float total = conta + cover;
	printf( "o valor da conta %.2f", total);
	
}
