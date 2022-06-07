#include <stdio.h>

int main()
{
    int n;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &n);

    int vetA[n], vetB[n], vetC[n];

    printf("Digite os valores do vetor A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetA[i]);
    }

    printf("Digite os valores do vetor B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetB[i]);
    }

    for (int i = 0; i < n; i++) {
        vetC[i] = vetA[i] + vetB[i];
    }

    printf("VETOR RESULTANTE:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", vetC[i]);
    }

    return 0;
}
