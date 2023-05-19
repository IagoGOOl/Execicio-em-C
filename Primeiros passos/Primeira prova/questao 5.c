#include <stdio.h>

#define ds 2
void main()
{
	const int pi = 1;
	const int zero = 0;
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int copia_numero = numero;
    int primo = ds;
    while (numero > pi)
    {
        if (numero % primo == zero)
        {
            if (numero / primo == pi)
            {
                printf("%d", primo);
                numero = numero / primo;
            }
            else
            {
                printf("%d x ", primo);
                numero = numero / primo;
            }
        }
        else
        {
            primo = primo + pi;
        }
    }
    printf(" = %d\n", copia_numero);
}
