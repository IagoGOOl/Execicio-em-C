/*5. A matemática prova que números inteiros podem ser representados de maneira única como um produto de potências de números primos distintos. Este produto
é chamado de decomposição em fatores primos do número e os expoentes são chamados de multiplicidade do primo respectivo. Por exemplo, 360 =
2x2x2x3x3x5 e 21 = 3x7. Com base nessas informações, escreva um programa em C que obtenha a decomposição em fatores primos de um número inteiro
positivo informado pelo usuário.*/

#include<stdio.h>

	void main(){
		
		int k, num, div;
		
		printf("Informe o numero que queira decompor: ");
		scanf("%d", &num);
		
		printf("\n\nO seu numero decomposto eh:\n\n");
		
		k=num;
		div=2;
		
		while(k>1){
			
			if(k%div==0){
				
				if(k/div==1){
					
					printf("%d", div);
					
					k=k/div;	
				}
				else{
					printf("%d x ", div);
					k=k/div;	
				}	
			}
			else{
				div=div+1;
			}		
		}
		printf("= %d", num);
	}