#include <stdio.h>
#include <math.h>

int main ()

{
	/*Inicio - Variaveis*/
	float base, altura, vol;
	/*Obtencao de Informacao - Valor da Base*/
	printf("Me informe o valor da base: ");
	scanf("%f", &base);
	/*Obtencao de Informacao - Valor da Altura*/
	printf("Me informe o valor da altura: ");
	scanf("%f", &altura);
	/*Processamento*/
	vol = (1.00 / 3.00) * base * altura;
	/*Resultado*/
	printf("\nO valor do volume eh: %.2f\n", vol);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
