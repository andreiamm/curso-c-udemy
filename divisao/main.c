#include <stdio.h>

int main()
{
    int n, numerador, denominador;
    double divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Entre com o numerador: ");
        scanf("%d", &numerador);
        printf("Entre com o denominador: ");
        scanf("%d", &denominador);

        if (denominador == 0) {
            printf("DIVISAO IMPOSSIVEL\n");
        } else {
            divisao = (double)numerador / denominador;
            printf("DIVISAO = %.2lf\n", divisao);
        }
    }

    return 0;
}
