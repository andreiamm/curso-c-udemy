#include <stdio.h>

int main()
{
    int n, qtdePares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    qtdePares = 0;
    printf("\nNUMEROS PARES:\n");
    for (int i = 0; i < n; i++) {
        if (vet[i] % 2 == 0){
            printf("%d ", vet[i]);
            qtdePares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d\n", qtdePares);

    return 0;
}
