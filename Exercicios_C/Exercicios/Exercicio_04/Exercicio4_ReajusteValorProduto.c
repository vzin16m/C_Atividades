#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	int produto;
	/*Obtencao de Informacao - ValorProduto*/
	printf("Me informe o valor do produto: ");
	scanf("%d", &produto);
	/*Processamento*/
	produto = produto * 1.15;
	/*Resultado*/
	printf("\nO preco do produto sofreu um reajuste de '15%', agora seu valor eh: %d\n", produto);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
