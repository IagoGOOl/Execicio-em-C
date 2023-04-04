#include<stdio.h>
void main(){
	int num1, num2, num3;
	const int div = 3;
	printf("informe as 3 notas numero");
	scanf("%d%d%d", &num1, &num2, &num3);
	float media = (num1 + num2 + num3) / div;
	printf ("a media eh: %.2f", media);
}
