#include <stdio.h>

/*

   Escreva um programa C que utilize um vetor para armazenar a nota 
   de 10 alunos de uma disciplina, calcule e imprima a média, e 
   determine o número de alunos que tiveram nota superior à média.

*/

int main()
{
	// VARIAVEIS //
	int i,j,k;
	float media, vet[10];
	j=0;

	// PROCESSAMENTO //
	printf("Informe as dez notas\n");

	for(i=0; i<10; i++)
	{
		printf("Me informe a %d nota: ", i+1);
		scanf("%f", &vet[i]);
		media += vet[i];
	}
	
	media = media / (i + 1);

	for(i=0; i<10; i++)
	{
		if(vet[i]>media)
		{
			j++;
		}
	}

	// RESULTADO //
	printf("A media das dez notas eh: %2.f\n", media);
	printf("Das notas, %d tiveram notas superiores a media\n", j);

return 0;
}
