#include<stdio.h>
void main(){
	float lado,area;
	const float v = 4;
	printf("informe o lado quadrado");
	scanf("%f", &lado);
	area = lado * lado;
	float perimentro = lado * v ;
	printf ("a area de quadrado eh: %2.f\n O perimentro eh %2.f", area, perimentro);
}
