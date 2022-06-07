#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    if (n2 % n1 == 0 || n1 % n2 == 0) {
        printf("Sao multiplos");
    } else {
        printf("Nao sao multiplos");
    }

    return 0;
}
