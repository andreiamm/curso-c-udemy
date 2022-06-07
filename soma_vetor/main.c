#include <stdio.h>

int main()
{
    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    double soma = 0;
    printf("\nVALORES =");
    for (int i = 0; i < n; i++) {
        printf(" %.1lf", vet[i]);
        soma = soma + vet[i];
    }

    double media = soma / n;

    printf("\nSOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf\n", media);

    return 0;
}
