#include<stdio.h>
void main() {
	int numpessoa;
	printf ("informe o numero de pessoa no churraco:");
	scanf ("%d", &numpessoa);
	int totalg = numpessoa * 250;
	int totalk = totalg / 1000;
	if (totalg % 1000 != 0) {
		totalk = totalk + 1;
	}
	printf("voce deve compra o %d kg de carne.", totalk);
	
}
