#include<stdio.h>

void main(){
	const int TAMANHO = 10;
	int vet[TAMANHO];
	int k;
	for(k=0; k<TAMANHO;k++){
		printf("informe o gabarito:");
		scanf("%d", &vet[k]);}
	printf("Os numeros informados foram:\n");
	for(k=0; k<TAMANHO;k ++){
		printf("%d", &vet[k]);
	}
}
