#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	float idade, bat;
	/*Obtencao de Informacao - ValorProduto*/
	printf("Me informe a sua idade: ");
	scanf("%f", &idade);
	/*Processamento*/
	
	bat = (((((idade * 365,25)* 24)*60)*60));
	/*Resultado*/
	printf("\nA quantidade de vezes que o coração baterá em %.f anos eh: %.f vezes", idade, bat);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
