#include <stdio.h>

int main() {
    /* Determinação de Variáveis */
    float Sal;

    /* Coleta de Dados */
    printf("Informe o salario a ser calculado: ");
    scanf("%f", &Sal);

    /* Processamento e Exibição dos Resultados */
    printf("\nGratificacao (10%%): %.2f", Sal * 0.10);
    printf("\nImposto (8%%): %.2f", Sal * 0.08);
    printf("\nSalario Final: %.2f\n", Sal + (Sal * 0.10) - (Sal * 0.08));

    return 0;
}
