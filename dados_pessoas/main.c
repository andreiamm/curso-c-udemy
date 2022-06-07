#include <stdio.h>

void limpar_entrada() {
   char c;
   while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int n, qtdeMulheres;
    double menor, maior, somaAlturaMulheres;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char sexo[n];
    double altura[n];

    for (int i = 0; i < n; i++) {
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &altura[i]);
        printf("Genero da %da pessoa: ", i + 1);
        limpar_entrada();
        scanf("%c", &sexo[i]);
    }

    menor = altura[0];
    maior = altura[0];
    for (int i = 1; i < n; i++) {
        if (altura[i] < menor) {
            menor = altura[i];
        }
        if (altura[i] > maior) {
            maior = altura[i];
        }
    }

    printf("Menor altura = %.2lf\n", menor);
    printf("Maior altura = %.2lf\n", maior);

    qtdeMulheres = 0;
    somaAlturaMulheres = 0;
    for (int i = 0; i < n; i++) {
        if (sexo[i] == 'F') {
            somaAlturaMulheres = somaAlturaMulheres + altura[i];
            qtdeMulheres++;
        }
    }

    printf("Media das alturas das mulheres = %.2lf\n", somaAlturaMulheres / qtdeMulheres);
    printf("Numero de homens = %d\n", n - qtdeMulheres);

    return 0;
}
