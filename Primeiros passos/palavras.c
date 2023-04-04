#include<stdio.h>
#include<string.h>
void main(){
	char palavra[40];
	printf("digite a palavra que deseja");
	gets(palavra);
	int quatidade = strlen (palavra);
	int silabas = quatidade / 2;
	printf ("A parlavra tem %d letras %d silabas", quatidade, silabas);
	
	
}
