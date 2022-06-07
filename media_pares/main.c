#include <stdio.h>

int main()
{
    int n, qtdePares = 0, somaPares = 0;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            somaPares = somaPares + vet[i];
            qtdePares++;
        }
    }

    if (qtdePares == 0) {
        printf("NENHUM NUMERO PAR\n");
    } else {
        printf("MEDIA DOS PARES = %.1lf\n", (double)somaPares / qtdePares);
    }

    return 0;
}
