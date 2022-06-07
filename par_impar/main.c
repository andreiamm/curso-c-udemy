#include <stdio.h>

int main()
{
    int n, x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x == 0) {
            printf("NULO\n");
        } else {
            if (x % 2 != 0) {
                printf("IMPAR ");
            } else {
                printf("PAR ");
            }

            if (x < 0) {
                printf("NEGATIVO\n");
            } else {
                printf("POSITIVO\n");
            }
        }
    }

    return 0;
}
