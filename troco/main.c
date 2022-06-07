#include <stdio.h>

int main()
{
    double preco, recebido, troco;
    int qtde;

    printf("Preço unitário do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &qtde);
    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);

    troco = recebido - (preco * qtde);

    printf("TROCO = %.2lf", troco);

    return 0;
}
