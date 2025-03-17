#include <stdio.h>
#include <time.h>

int main() {
    /* Medição do tempo de execução */
    clock_t inicio = clock();

    /* Determinação de Variáveis */
    int TempSeg, horas, minutos, segundos;

    /* Coleta de Dados */
    printf("Informe o tempo do evento em segundos: ");
    scanf("%d", &TempSeg);

    /* Processamento */
    horas = TempSeg / 3600;
    minutos = (TempSeg % 3600) / 60;
    segundos = TempSeg % 60;

    /* Saída */
    printf("\nO tempo total do evento eh: %d hrs %d min %d seg\n", horas, minutos, segundos);

    /* Tempo de execução */
    clock_t fim = clock();
    double tempo_execucao = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Tempo de execucao: %.6f segundos\n", tempo_execucao);

    return 0;
}
