#include <stdio.h>

int main()
{
    double c, f;
    char escala;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    printf("Digite a temperatura em ");
    if (escala == 'F') {
        printf("Fahrenheit: ");
        scanf("%lf", &f);
    } else {
        printf("Celsius: ");
        scanf("%lf", &c);
    }

    printf("Temperatura equivalente em ");
    if (escala == 'F') {
        c = 5.0 * (f - 32.0) / 9.0;
        printf("Celsius: %.2lf", c);
    } else {
        f = 9.0 * c / 5.0 + 32.0;
        printf("Fahrenheit: %.2lf", f);
    }

    return 0;
}
