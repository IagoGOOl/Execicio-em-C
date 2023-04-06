#include<stdio.h>
void main (){
	char nome[20], resposta;
	printf("informe sou nome");
	scanf("%s", nome);
	printf("ola %s\n", nome);
	printf("tudo bem ?");
	printf("\nResponda\nSIM ou NAO !\n\n\n");
	scanf("%s", resposta);
	if (resposta == sim ){
		printf ("nossa que bom fico feliz");
	}else {
		printf ("nossa, sinto muito");
	}
	}
