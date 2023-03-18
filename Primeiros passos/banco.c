#include <stdio.h>

void main()
{

    int valor, cem, cinquenta, vinte, dez;
    printf("Informe o valor de saque ate R$ 1000,00: \n");
    scanf("%d", &valor);

    if (valor >= 100)
    {
        cem = valor / 100;
        int totalCem = 100 * cem;

        valor = valor % 100;
        printf("O total de notas de 100 sao %d", cem);

        if (valor >= 50 & valor < 100)
        {
            cinquenta = valor / 50;
            int totalCinquenta = 50 * cinquenta;

            valor = valor % 50;
            printf("\nO total de notas de 50 sao %d", cinquenta);
        }

        if (valor >= 20 & valor < 50)
        {
            vinte = valor / 20;
            int totalVinte = 20 * vinte;

            valor = valor % 20;
            printf("\nO total de notas de 20 sao %d", vinte);
        }

        if (valor >= 10 & valor < 20)
        {
            dez = valor / 10;
            int totalDez = 10 * dez;
            printf("\nO total de notas de 10 sao %d", dez);
        }
    }
    else
    {
        printf("Valor Impossivel de Sacar.");
    }
}
