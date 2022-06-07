#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) {
     fgets(buffer, length, stdin);
     strtok(buffer, "\n");
}

int main()
{
    char nome[50];
    double valorHora;
    int horasTrabalhadas;

    printf("Nome: ");
    ler_texto(nome, 50);
    printf("Valor por hora: ");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("O pagamento para %s deve ser de %.2lf", nome, valorHora * horasTrabalhadas);

    return 0;
}
