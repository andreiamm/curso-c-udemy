#include <stdio.h>

int main()
{
    int codigo, qtde;
    double valor;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &qtde);

    if (codigo == 1) {
        valor = qtde * 5.00;
    } else if (codigo == 2) {
        valor = qtde * 3.50;
    } else if (codigo == 3) {
        valor = qtde * 4.80;
    } else if (codigo == 4) {
        valor = qtde * 8.90;
    } else {
        valor = qtde * 7.32;
    }

    printf("Valor a pagar: R$ %.2lf", valor);

    return 0;
}
