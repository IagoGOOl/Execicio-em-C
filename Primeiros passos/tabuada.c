#include<stdio.h>
void main (){
	int x, n, m;
	const int ta = 1;
	printf ("informe o numero que voce quer ver a tabuada:");
	scanf ("%d", &n);
	printf (" informe ate qual numero voce deseja multiplica:");
	scanf ("%d", &m);
	for (x = ta; x <= m; x++)
	{
		int resultado = n * x;
		printf ("%d\n", resultado);
	}
}
