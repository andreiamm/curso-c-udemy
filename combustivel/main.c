#include <stdio.h>

int main()
{
    int tipo, alcool, gasolina, diesel;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &tipo);

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while (tipo != 4) {
        if (tipo == 1) {
            alcool++;
        } else if (tipo == 2) {
            gasolina++;
        } else if (tipo == 3) {
            diesel++;
        }

        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &tipo);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
