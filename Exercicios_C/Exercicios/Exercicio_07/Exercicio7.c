#include <stdio.h>
#include <stdlib.h>

int main ()
{
	/*Determinação de Variaveis*/
	float Sal;
	
	/*Coleta de Dados*/
	printf ("Informe o salario a ser calculado: ");
	scanf ("%f", &Sal);
	
	/*Processamento*/
	Sal = (Sal + 50) - ( Sal * 0.07);
	/*Resolução*/
	printf("\nO valor do imposto eh: %.2f\n", Sal * 0.07);
	printf("\nO valor total do salario eh: %.2f\n", Sal);
	
	/*FIM*/
	system ("pause");
	return 0;
	
}