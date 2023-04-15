#include<stdio.h>
void main(){
	int numero, resultado;
	printf ("informe um numero:");
	scanf("%d", &numero);
	resultado = numero % 2;
	int resto = numero %2;
	int resultado2 = numero / 2;
	if ( resultado == 0){
		printf("o numero informado eh par e o resultado eh %d ", resultado2);
		
	} else {
		printf(" o numero eh impar e o resultado eh %d e o resto eh %d", resultado2, resto);
	}
	
}
