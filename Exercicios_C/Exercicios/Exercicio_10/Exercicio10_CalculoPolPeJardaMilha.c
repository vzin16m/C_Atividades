#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	float pol, jarda, pe, milha;
	/*Obtencao de Informacao - ValorProduto*/
	printf("Me informe quantos 'pes': ");
	scanf("%f", &pe);
	/*Sabe-se que 1 pe = 12 polegadas*/
	/*Sabe-se que 1 jarda = 3 pes*/
	/*Sabe-se que 1 milha = 1760 jardas*/
	/*Processamento*/
	pol = 12.00 * pe;
	jarda = pe / 3.00 ;
	milha = jarda / 1760 ;
	/*Resultado A*/
	printf("\nO valor de polegadas eh: %.2f\n", pol);
	/*Resultado B*/
	printf("\nO valor da jarda eh: %.2f\n", jarda);
	/*Resultado C*/
	printf("\nO valor da milha eh: %f\n", milha);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
