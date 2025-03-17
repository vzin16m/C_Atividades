#include <stdio.h>
#include <stdlib.h>

int main ()
{
	/*Determinação de Variaveis*/
	int TempSeg;
	
	/*Coleta de Dados*/
	printf ("Informe o tempo do evento em segundos: ");
	scanf ("%d", &TempSeg);
	
	/*Processamento e Resolução*/
	printf("\nO tempo total do evento em horas, minutos e segundos eh:\n%d hrs", (TempSeg / 60) / 60);
	printf(" %d min", TempSeg / 60);
	printf(" %d seg\n", TempSeg);
	
	/*FIM*/
	system ("pause");
	return 0;
	
}