#include<stdio.h>
void main (){
	float lado; //variavel
	printf ("informe o valor do lado quadrado"); //mensagem de saida
	scanf("%f",&lado); // ler o valor da variavel
	float area = lado * lado; //multiplica o valor por ele msm
	float perimetro = 4 * lado;
	printf (" A area eh %.2f e o perimentro eh %.2f", area, perimetro);
	getch();
}
