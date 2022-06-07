#include <stdio.h>
#include <string.h>

void limpar_entrada() {
   char c;
   while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
     fgets(buffer, length, stdin);
     strtok(buffer, "\n");
}

int main()
{
    int n, qtdeMenores;
    double alturaTotal, alturaMedia;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nome[n][50];
    int idade[n];
    double altura[n];

    for (int i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    alturaTotal = 0;
    qtdeMenores = 0;
    for (int i = 0; i < n; i++) {
        alturaTotal = alturaTotal + altura[i];

        if (idade[i] < 16) {
            qtdeMenores++;
        }
    }

    alturaMedia = alturaTotal / n;
    printf("\nAltura media: %.2lf\n", alturaMedia);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", (double)qtdeMenores / n * 100);

    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}
