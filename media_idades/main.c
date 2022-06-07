#include <stdio.h>

int main()
{
    int idade, soma, contador;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("IMPOSSIVEL CALCULAR");
    } else {

        soma = 0;
        contador = 0;
        while (idade >= 0) {
            soma = soma + idade;
            contador++;
            scanf("%d", &idade);
        }

        media = (double)soma / contador;
        printf("MEDIA = %.2lf", media);
    }

    return 0;
}
