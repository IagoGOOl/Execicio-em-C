#include<stdio.h>
void main(){
	float  lado, area, perimentro;
	printf ("informe um dos lado do quadrado");
	scanf("%f", &lado);
	area = lado * lado;
	perimentro = lado * 4;
	printf (" A area do quadrado e, %.3f \n e o perimentro e %.3f", area, perimentro);
	getch();
}
