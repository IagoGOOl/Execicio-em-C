#include<stdio.h>
void main(){
	float nota1, nota2, nota3, resultado;
	printf("informe as sua 3 notas");
	scanf("%f%f%f", &nota1, &nota2, &nota3);
	resultado = (nota1 + nota2 + nota3) / 3;
	if ( resultado>= 7.0 ) {
		printf (" parabens sua media foi %f,voce foi aprovado", resultado);
	} 
	else if (resultado < 7.0 || resultado >= 3.0) {
		printf ("sua media foi %f, voce esta na final",resultado);
	}
	else {
		printf (" sua media foi %f, voce foi reprovado", resultado);
	}
}
