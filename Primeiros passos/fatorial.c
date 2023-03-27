#include<stdio.h>
int fatorial (int n){
	int fator = 1;
	int k;
	for (k=n; k>=2; k--){
		fator = fator * k;
	}
	return fator;
}

void main(){
	int k, n;
	for(k= 1; k = 5 ; k++){
		printf("informe um numero inteiro nao negativo");
		scanf("%d", &n);
		int valor = fatorial(n);
		printf("O fatorial de %d eh %d\n", n , valor);
	}
}
