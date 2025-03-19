#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	float graus_F, pol;
	/*Obtencao de Informacao - Valor da Temperatura em Fahrenheit*/
	printf("Me informe a temperatura em graus Fahrenheit: ");
	scanf("%f", &graus_F);
	/*Obtencao de Informacao - Valor da Quantidade de chuva em Polegadas*/
	printf("Me informe a quantidade de chuva em polegadas: ");
	scanf("%f", &pol);
	/*Processamento*/
	graus_F = ( 5.00 / 9.00) * (graus_F - 32);
	pol = pol / 25.4;
	/*Resultado*/
	printf("\nA temperatura em graus celsius eh: %.2f C\n", graus_F);
	printf("\nA quantidade de chuva em milimetros eh: %.2f mm\n", pol);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
