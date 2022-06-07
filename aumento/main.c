#include <stdio.h>

int main()
{
    double salarioAtual, aumento, salarioNovo;
    int porcentagemAumento;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salarioAtual);

    if (salarioAtual <= 1000.0) {
        porcentagemAumento = 20;
     } else if (salarioAtual <= 3000.0) {
        porcentagemAumento = 15;
     } else if (salarioAtual <= 8000.0) {
        porcentagemAumento = 10;
     } else {
        porcentagemAumento = 5;
     }

     aumento = salarioAtual * porcentagemAumento / 100;
     salarioNovo = salarioAtual + aumento;

     printf("Novo salario = R$ %.2lf\n", salarioNovo);
     printf("Aumento = R$ %.2lf\n", aumento);
     printf("Porcentagem = %d %%", porcentagemAumento);

    return 0;
}
