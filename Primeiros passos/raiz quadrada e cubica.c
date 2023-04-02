#include<stdio.h>
#include<math.h>
void main(){
	int numero;
	printf("informe um nemero inteiro nao negativo");
	scanf ("%d", &numero);
	int cubo = pow (numero, 3);
	float raiz = sqrt (numero);
	printf ("o raiz cubica do numero informado e %d \n", cubo);
	printf ("A raiz quadrada do numero e %.9f", raiz);
	getch();

	
}
