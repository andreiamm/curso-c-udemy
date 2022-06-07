#include <stdio.h>

int main()
{
    int valor1, valor2, valor3;

    printf("Primeiro valor: ");
    scanf("%d", &valor1);
    printf("Segundo valor: ");
    scanf("%d", &valor2);
    printf("Terceiro valor: ");
    scanf("%d", &valor3);

    if (valor1 < valor2 && valor1 < valor3) {
        printf("MENOR = %d", valor1);
    } else if (valor2 < valor3) {
        printf("MENOR = %d", valor2);
    } else {
        printf("MENOR = %d", valor3);
    }

    return 0;
}
