#include <stdio.h>

int main ()

{
	/*Inicio - Variaveis*/
	int Nota1, Nota2, Nota3, media;
	/*Obtencao de Informacao - Nota 1*/
	printf("Me informe a primeira nota do aluno: ");
	scanf("%d", &Nota1);
	/*Obtencao de Informacao - Nota 2*/
	printf("Me informe a segunda nota do aluno: ");
	scanf("%d", &Nota2);
	/*Obtencao de Informacao - Nota 3*/
	printf("Me informe a terceira nota do aluno: ");
	scanf("%d", &Nota3);
	/*Processamento*/
	media = Nota1 + Nota2 + Nota3;
	media = media / 3;
	/*Resultado*/
	printf("\nA media do aluno eh: %d\n", media);
	
	/*Fim Programa*/
	system ("pause");
	return 0;
}
