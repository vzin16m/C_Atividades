#include <stdio.h>
int main()
{
	int x,y,resultado;
	printf("Me informe o primeiro valor: ");
	scanf("%d", &x);
	printf("\nMe informe o segundo valor: ");
	scanf("%d", &y);
	/*Processamento SOMA*/
	resultado = x + y;
	printf("\nO resultado da soma de %d e %d, eh: %d\n", x,y,resultado);
	/*Processamento SUBTRACAO */
	resultado = x - y;
	printf("\nO resultado da subtracao de %d e %d, eh: %d\n", x,y,resultado);
	/*Processamento DIVISAO */
	resultado = x / y;
	printf("\nO resultado da divisao de %d e %d, eh: %d\n", x,y,resultado);
	/*Processamento MULTIPLICACAO*/
	resultado = x * y;
	printf("\nO resultado da multiplicacao de %d e %d, eh: %d\n", x,y,resultado);
	system("pause");
	return 0;
	}

