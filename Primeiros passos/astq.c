#include <stdio.h>

void main()
{
    int numero , j;
    char carac = '*';

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for (numero; numero >= 1; numero--)
    {
        for ( j = numero; j >= 1; j--)
        {
            printf("%c", carac);
        }
        printf("\n");
    }
}
