/*4. Escreva um programa em C que leia um número inteiro positivo N e imprima o enésimo número primo positivo.*/

#include<stdio.h>

	void main(){
			
			int num, cont, n, k, realprimo;
			
			printf("Informe um valor: ");
			scanf("%d", &num);
			
			cont=0;
			int primo=2;
			
			for(n=1; n<=num; n++){
				int div=0;
				
				for(k=1; k<=primo; k++){
					if(primo%k==0){	
						div=div+1;	
					}	
				}
				
				if(div==2){	
					cont=cont+1;
					realprimo=primo;	
				}
				
				else{	
					n--;
				}
				
				primo++;		
			}
			 
		printf("\n\nO numero Primo eh: %d", realprimo);			
	}