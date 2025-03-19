#include <stdio.h>
#include <math.h>

int main ()

{
	/*Inicio - Variaveis*/
	float raio, altura, area, vol;
	/*Obtencao de Informacao - Valor da Base*/
	printf("Me informe o valor da raio: ");
	scanf("%f", &raio);
	/*Obtencao de Informacao - Valor da Altura*/
	printf("Me informe o valor da altura: ");
	scanf("%f", &altura);
	/*Processamento*/
	area = 2 * 3.14 * raio * (altura + raio);
	vol = 3.14 * pow(raio,2) * altura;
	/*Resultado*/
	printf("\nO valor da area e do volume respectivamente sao: %.2fm2 e %.2fm3\n", area, vol);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
