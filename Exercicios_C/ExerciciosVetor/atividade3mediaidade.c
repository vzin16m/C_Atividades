#include <stdio.h>

/*

	Escreva um programa C que utilize um vetor para armazenar a
	idade de um conjunto de N indivíduos, número este fornecido 
	pelo usuário. Calcule a média de idade deste grupo de 
	indivíduos, e determine o número de pessoas que tiveram 
	idade inferior à média.

*/

int main()
{
	// VARIAVEIS //
	int i,j,n;
	float media;
	j=0;

	// PROCESSAMENTO //
	printf("Informe quantas idades irá calcular: \n");
	scanf("%d",&n);

	printf("Me informe as %d idades: \n", n);
	int vet[n];

	for(i=0; i<n; i++)
	{
		printf("Me informe a %d idade: ", i+1);
		scanf("%d", &vet[i]);
		media += vet[i];
	}
	
	media = media / n;

	for(i=0; i<n; i++)
	{
		if(vet[i]<media)
		{
			j++;
		}
	}

	// RESULTADO //
	printf("A media das idades eh: %2.f\n", media);
	printf("Das idades, %d tiveram idades inferiores a media\n", j);

return 0;
}
