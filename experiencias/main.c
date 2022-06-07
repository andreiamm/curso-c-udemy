#include <stdio.h>

void limpar_entrada() {
   char c;
   while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int n, qtdeCobaias, coelhos, ratos, sapos, total;
    char tipoCobaia;
    double percentC, percentR, percentS;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);

    coelhos = 0;
    ratos = 0;
    sapos = 0;
    for (int i = 0; i < n; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtdeCobaias);
        printf("Tipo de cobaia: ");
        limpar_entrada();
        scanf("%c", &tipoCobaia);

        if (tipoCobaia == 'C') {
            coelhos = coelhos + qtdeCobaias;
        } else if (tipoCobaia == 'R') {
            ratos = ratos + qtdeCobaias;
        } else {
            sapos = sapos + qtdeCobaias;
        }
    }

    total = coelhos + ratos + sapos;
    percentC = (double)coelhos * 100 / total;
    percentR = (double)ratos * 100 / total;
    percentS = (double)sapos * 100 / total;

    printf("\nRELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf\n", percentC);
    printf("Percentual de ratos: %.2lf\n", percentR);
    printf("Percentual de sapos: %.2lf\n", percentS);

    return 0;
}
