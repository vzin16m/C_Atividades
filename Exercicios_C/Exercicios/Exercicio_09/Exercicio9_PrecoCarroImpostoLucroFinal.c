#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	int preco, preco_cons, imposto;
	/*Obtencao de Informacao - ValorProduto*/
	printf("Me informe o preco de fabrica do carro: ");
	scanf("%d", &preco);
	/*Obtencao de Informacao - ValorPercentLucro*/
	printf("Me informe o valor do percentual de lucro da distribuidora: ");
	scanf("%d", &preco_cons);
	/*Obtencao de Informacao - ValorPercentImpost*/
	printf("Me informe o valor do percentual de impostos: ");
	scanf("%d", &imposto);
	/*Processamento*/
	preco_cons = preco * (preco_cons/100.00);
	imposto = preco * (imposto/100.00);
	preco = preco + preco_cons + imposto;
	/*Resultado A*/
	printf("\nO valor do lucro da distribuidora eh: %d\n", preco_cons);
	/*Resultado B*/
	printf("\nO valor do imposto eh: %d\n", imposto);
	/*Resultado C*/
	printf("\nO valor do carro para venda eh: %d\n", preco);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
