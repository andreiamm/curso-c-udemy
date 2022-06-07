#include <stdio.h>

int main()
{
    int minutos;
    double valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    valor = 50.0;
    if (minutos > 100) {
        valor = (minutos - 100) * 2.0 + valor;
    }

    printf("Valor a pagar: R$ %.2lf", valor);

    return 0;
}
