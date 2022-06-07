#include <stdio.h>

int main()
{
    int inicio, fim, total;

    printf("Hora inicial: ");
    scanf("%d", &inicio);
    printf("Hora final: ");
    scanf("%d", &fim);

    if (inicio < fim) {
        total = fim - inicio;
    } else {
        total = 24 - inicio + fim;
    }

    printf("O JOGO DUROU %d HORA(S)", total);

    return 0;
}
