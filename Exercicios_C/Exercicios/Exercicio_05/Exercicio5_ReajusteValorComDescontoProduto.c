#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	float produto, percDescont;
	/*Obtencao de Informacao - ValorProduto*/
	printf("Me informe o valor do produto: ");
	scanf("%f", &produto);
	/*Obtencao de Informacao - ValorProduto*/
	printf("Me informe o valor do percentual de desconto: ");
	scanf("%f", &percDescont);
	/*Processamento*/
	produto = ( produto) - (produto * (percDescont/100));
	/*Resultado*/
	printf("\nO preco do produto com o desconto proposto eh: %.2f\n", produto);
	printf("\nO valor do desconto eh: %.f\n", percDescont);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
