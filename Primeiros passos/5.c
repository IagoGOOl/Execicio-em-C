#include<stdio.h>
void main(){
	int a, n1, n2, resto;
	printf("informe o primeiro numero inteiro");
	scanf("%d", &n1);
	printf("informe o primeiro numero inteiro");
	scanf("%d", &n2);
	for (a=1; a>0; a++){
		resto = (n1*a) % n2;
		if(resto == 0) break;
	}
	printf("O MMC entre %d e %d e: %d\n", n1 ,n2);
}
