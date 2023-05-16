/*2. Escreva um programa em C que leia o peso e a altura de uma pessoa e verifique se ela está dentro da faixa de peso adequada, abaixo do peso ou acima do peso.
Caso a pessoa esteja fora do peso adequado o programa deve informar quantos Kg ela deve ganhar ou perder para ficar dentro da faixa adequada. Para resolver
este programa, considere que o IMC ideal para uma pessoa deve estar entre 18 e 25. O valor do IMC corresponde ao peso dividido pelo quadrado da altura.*/

#include<stdio.h>

	const int minImc=18;
	const int maxImc=25;

	void main(){
		
		float altura, peso, imc, pesoNecessario;
		
		printf("Informe sua Altura:  ");
		scanf("%f", &altura);
		printf("\nInforme seu Peso: ");
		scanf("%f", &peso);
		
		imc= peso/(altura*altura);
		
		if(imc<minImc){
			
			pesoNecessario=minImc*(altura*altura)-peso;
			
			printf("\n\nSeu IMC: (%.2f), esta abaixo do limite minimo %d", imc, minImc);
			
			printf("\n\nEh necessario ganhar %.3f quilos", pesoNecessario);
			
		}
		else if(imc>maxImc){
			
			pesoNecessario=peso-maxImc*(altura*altura);
			
			printf("\n\nSeu IMC: (%.2f), esta acima do limite maximo: %d", imc, maxImc);
			
			printf("\n\nEh necessario perder %.3f quilos", pesoNecessario);
			
		}
		else{
			
			printf("\n\nO seu IMC: (%.2f) esta entre os limites ideais", imc);
			
		}
		
	}