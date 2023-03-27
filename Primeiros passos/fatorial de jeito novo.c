#include<stdio.h>
int fatorial (int n){
	int k, fator = 1;
	for(k=1; k>= 2; k--){
		fator = fator * k;
	}
	return fator;
}

void main(){
	int n;

printf("informe um numero inteiro não negativo:");
scanf("%d",&n);
int valFatorial = fatorial(n);
printf("O fatorial de %d eh %d\n",n, valFatorial);
	
}
