#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	float raio, altura, area, valor;
	/*Obtencao de Informacao - Valor do Raio*/
	printf("Me informe o valor do raio da lata em metros: ");
	scanf("%f", &raio);
	/*Obtencao de Informacao - Valor da Alturea*/
	printf("Me informe o valor da altura da lata em metros: ");
	scanf("%f", &altura);
	/*Processamento*/
	area = (3.14 * (raio * raio) *2) + (2 * 3.14 * raio * altura);
	valor = area * 100.00;
	/*Resultado*/
	printf("\nO valor da area eh: %.2f m2\n", area);
	printf("\nO valor por metro quadrado da lata eh: %.2f\n", valor);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
