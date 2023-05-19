 #include <stdio.h>
 #define zero 0
void main(){
	const int dois = 2;
	const int um = 1;
     int numero;

    printf("Digite um numero: ");
	scanf("%d", &numero);
	int contagem = zero;
	int primo = dois;
	int enesimo = zero;
	while (contagem != numero){
	int numeroatual = um;
	int divisores = zero;
	while (numeroatual <= primo){
	if (primo % numeroatual == zero)
	{
	 divisores = divisores + um;
	 }
	 numeroatual = numeroatual + um;
	 }
	 if (divisores == dois)
	 {
	 contagem = contagem + um;
	  enesimo = primo;
	  }
	   primo = primo + um;
	   }
	   printf("O %d numero enesimo eh: %d\n", numero, enesimo);
	   }
