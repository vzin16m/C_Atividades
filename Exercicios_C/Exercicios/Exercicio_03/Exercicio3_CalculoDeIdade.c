#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	int anoNasc, anoAtual, idade, idadeFut;
	/*Obtencao de Informacao - Nota 1*/
	printf("Me informe o ano em que nasceu: ");
	scanf("%d", &anoNasc);
	/*Obtencao de Informacao - Nota 2*/
	printf("Me informe em que ano estamos?: ");
	scanf("%d", &anoAtual);
	/*ProcessamentoA*/
	idade = anoAtual - anoNasc;
	/*ResultadoA*/
	printf("\nA sua idade entao eh: %d\n", idade);
	/*ProcessamentoB*/
	idade = 2050 - anoNasc;
	/*ResultadoB*/
	printf("\nE sua idade, em 2050, sera: %d\n", idade);
	/*Fim Programa*/
	system ("pause");
	return 0;
}
