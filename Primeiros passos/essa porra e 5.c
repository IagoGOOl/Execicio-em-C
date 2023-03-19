#include<stdio.h>
#include<math.h>
void main (){
	int a;
	int i;
	int k;
	printf("informe o tamanho da matriz quadratica:");
	scanf("%d", &a);
	int l = 1;
	int matriz [a][a];
	for(i=0; i<a; i++){
		for(k=0; k<a; k++){
			matriz[i][k] = l;
			l = l *2;
			
		}
		
	}
	for(i=0; i<a; i++){
		for(k=0; k<a; k++){
		printf ("%d ", matriz [i][k]);
		}
		printf("\n");
		}
}
