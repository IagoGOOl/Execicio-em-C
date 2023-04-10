#include <stdio.h>
void main(){
	int vet1 [5];
	int vet2 [5];
	int cont=0;
	int i;
	int j;
	int numero;
	for(i=0; i<5; i++){
		printf("digite os valores que deseja:");
		scanf("%d",&vet1[i]);
	}
	for(j=0; j<5; j++){
		printf("digite os valores que deseja:");
		scanf("%d",&vet2[i]);
		} 
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
		if(vet1[i]!= vet2[j] ){
		cont = cont + 1;
		} if (cont == 0){
			printf("%d",vet1[i]);
		}
		cont = 0;
		}
	} }
