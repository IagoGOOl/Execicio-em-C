#include <stdio.h>
void main (){
	float lado, area, perimetro;
	printf ("informe um dos lado do quadrado !: ");
	scanf ("%f", &lado);
	area = lado * lado;
	perimetro = lado * 4;
	printf(" A area eh %.3f eo perimetro eh %.3f ", area,perimetro);
	getch();
}
