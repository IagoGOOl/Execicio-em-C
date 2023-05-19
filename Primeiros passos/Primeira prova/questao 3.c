#include <stdio.h>

void main()
{
	const int zero = 0;
	const int dois = 2;
	const int um = 1;
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int contagem = zero;
    if (numero == zero)
    {
        contagem = um;
    }
    else
    {
        while (numero > zero)
        {
            numero = numero / dois;
            contagem = contagem + um;
        }
    }
    printf("A quatindade de bits eh: %d\n", contagem);
}
