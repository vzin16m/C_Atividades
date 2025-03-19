#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	float trabalho;
	/*Obtencao de Informacao - ValorProduto*/
	printf("Me informe a quantidade de dias de trabalho: ");
	scanf("%f", &trabalho);
	/*Sabe-se que o trabalhador recebe 100 reais o dia*/
	/*Processamento*/
	trabalho = (trabalho * 100) - ((trabalho * 100.00) * 0.08);
	/*Resultado*/
	printf("\nO valor a ser pago eh: %.2f\n", trabalho);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
