#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	float zinco, cobre, latao;
	/*Obtencao de Informacao - ValorProduto*/
	printf("Me informe a quantidade de latao em kg: ");
	scanf("%f", &latao);
	/*Processamento*/
	latao = latao / 10;
	zinco = 3 * latao;
	cobre = 7 * latao;
	/*Resultado Cobre*/
	printf("\nA quantidade de cobre necessario eh: %.2f kg\n", cobre);
	/*Resultado Zinco*/
	printf("\nA quantidade de cobre necessario eh: %.2f kg\n", zinco);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
