//1. Escreva um programa em C que leia um valor em segundos e o imprima no formato X horas, Y minutos, Z segundos.

#include<stdio.h>
	
	void main(){
		
		int tempo, hora, minuto, segundo, resto;
		
		printf("Informe os segundos: ");
		scanf("%d", &tempo);
		
		hora = tempo/3600;
		resto = tempo%3600;
		minuto = resto/60;
		segundo = resto%60;
		
		printf("\n\nO tempo informado eh igual a %d Horas, %d Minutos e %d Segundos", hora, minuto, segundo);
		
	}