#include <stdio.h>

int main()
{
    int n;
    double valor1, valor2, valor3, media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite tres numeros:\n");
        scanf("%lf %lf %lf", &valor1, &valor2, &valor3);

        media = (valor1 * 2.0 + valor2 * 3.0 + valor3 * 5.0) / 10.0;
        printf("MEDIA = %.1lf\n", media);
    }

    return 0;
}
