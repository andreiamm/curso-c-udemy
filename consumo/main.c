#include <stdio.h>

int main()
{
    int distancia;
    double combustivelGasto, consumoMedio;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);
    printf("Combustivel gasto: ");
    scanf("%lf", &combustivelGasto);

    consumoMedio = distancia / combustivelGasto;

    printf("Consumo medio: %.3lf", consumoMedio);

    return 0;
}
