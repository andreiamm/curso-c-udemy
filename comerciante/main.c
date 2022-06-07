#include <stdio.h>
#include <string.h>

void limpar_entrada() {
   char c;
   while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
     fgets(buffer, length, stdin);
     strtok(buffer, "\n");
}

int main()
{
    int n, abaixo = 0, entre = 0, acima = 0;
    double percentualLucro, compraTotal, vendaTotal;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    char nome[n][50];
    double precoCompra[n], precoVenda[n];

    for (int i = 0; i < n; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Preco de compra: ");
        scanf("%lf", &precoCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precoVenda[i]);
    }

    for (int i = 0; i < n; i++) {
        percentualLucro = (precoVenda[i] - precoCompra[i]) / precoCompra[i];
        if (percentualLucro < 0.1){
            abaixo++;
        } else if (percentualLucro < 0.2){
            entre++;
        } else {
            acima++;
        }
    }

    compraTotal = precoCompra[0];
    vendaTotal = precoVenda[0];
    for (int i = 1; i < n; i++) {
        compraTotal = compraTotal + precoCompra[i];
        vendaTotal = vendaTotal + precoVenda[i];
    }

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", abaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de compra: %.2lf\n", compraTotal);
    printf("Valor total de venda: %.2lf\n", vendaTotal);
    printf("Lucro total: %.2lf\n", vendaTotal - compraTotal);

    return 0;
}
