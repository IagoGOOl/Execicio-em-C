#include<stdio.h>
float media (int n1, int n2, int n3){
	float soma = n1 + n2 + n3;
	return soma/3;
}
void main(){
	int n1, n2, n3;
	printf("Informe tres numeros inteiros:");
	scanf("%d%d%d",&n1, &n2, &n3);
	float mediaArit = media (n1,n2,n3);
	printf("A media aritmetica eh %.1f",mediaArit);
	
}
