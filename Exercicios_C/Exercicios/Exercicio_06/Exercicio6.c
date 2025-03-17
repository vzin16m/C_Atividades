#include <stdio.h>
#include <stdlib.h>

int main ()
{
	/*Determinação de Variaveis*/
	int Sal, Bonus, Descont;
	
	/*Coleta de Dados*/
	printf ("Informe o salario a ser calculado: ");
	scanf ("%d", &Sal);
	
	/*Processamento*/
	Bonus = Sal * 0.10; /*10% de gratificação*/
	Descont = Sal * 0.08; /*08% de imposto*/
	Sal = ( Sal + Bonus) - Descont;
	/*Resolução*/
	printf("\nO valor da gratificacao eh: %d\n", Bonus);
	printf("\nO valor do imposto eh: %d\n", Descont);
	printf("\nO valor total do salario eh: %d\n", Sal);
	
	/*FIM*/
	system ("pause");
	return 0;
	
}