#include<stdio.h>
int numeroDiv(int n){
	int k, cont = 0;
	for (k = 1; k <= n; k++) {
		if(n % k == 0){
			cont++;
		}
	}
	return cont;
}
int ehprimo (int n){
	int divisores = numeroDiv(n);
	if (divisores == 2){
		return 1;
	} 
	else{
	return 0;
	}
}
void main(){
	int m,n, k;
	printf(" informe os limites do intervalo:");
	scanf("%d%d", &m, &n);
	printf ("os numeros primos do intevalo entra %d e %d sao: \n", m, n);
	for (k = m; k <= n; k++){
		int valor = ehprimo(k);
		if(valor == 1){
			printf("%d", k);
		}
	}
}
