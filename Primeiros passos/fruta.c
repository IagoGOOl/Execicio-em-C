#include<stdio.h>
#include<string.h>
void main(){
	char fruta1[20 ] = "abacaxi";
	char fruta2[20]= {'m', 'a' , 'n', 'g', 'a'};
	printf ("A fruta 1 eh %s e a fruta 2 eh %s", fruta1, fruta2);
	char fruta3 [20];
	strcpy (fruta3, fruta1);
	printf ("fruta3 eh %s", fruta3);
	strcpy (fruta3, fruta2);
	printf ("\nA fruta 3 eh %s",fruta3);

}
