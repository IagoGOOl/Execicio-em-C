#include<stdio.h>

int mmc(int n1, int n2, int n3, int cont)
{
    if (cont % n1 == 0 && cont % n2 == 0 && cont % n3 == 0)
    
    {
        return cont;
    }
    return mmc(n1, n2, n3, cont + 1);
}

void main()
{
    int numero1, numero2, numero3;
    printf("Informe 3 numeros inteiros positivos: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    int resultado = mmc(numero1, numero2, numero3, 1);
    printf("O mmc de %d, %d e %d eh: %d\n\n", numero1, numero2, numero3, resultado);
}
