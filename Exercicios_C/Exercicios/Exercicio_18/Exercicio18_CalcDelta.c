#include <stdio.h>
#include <math.h>

int main ()

{
	/*Inicio - Variaveis*/
	float vlr_a, vlr_b, vlr_c, delta;
	/*Obtencao de Informacao - Valor de A*/
	printf("Me informe o valor de A: ");
	scanf("%f", &vlr_a);
	/*Obtencao de Informacao - Valor de B*/
	printf("Me informe o valor de B: ");
	scanf("%f", &vlr_b);
	/*Obtencao de Informacao - Valor de C*/
	printf("Me informe o valor de C: ");
	scanf("%f", &vlr_c);
	/*Processamento*/
	delta = pow(vlr_b,2) - 4 * vlr_a * vlr_c;
	/*Resultado*/
	printf("\nO valor de delta eh: %.2f\n", delta);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
