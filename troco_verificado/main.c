#include <stdio.h>

int main()
{
    double preco, dinheiro, total;
    int qtde;

    printf("Preço unitário do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &qtde);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    total = preco * qtde;

    if (total <= dinheiro) {
        printf("TROCO = %.2lf", dinheiro - total);
    } else {
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", total - dinheiro);
    }

    return 0;
}
