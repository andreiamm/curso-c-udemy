#include <stdio.h>

int main()
{
    int n, fatorial;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }

    printf("FATORIAL = %d\n", fatorial);

    return 0;
}
