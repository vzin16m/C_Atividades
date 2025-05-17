#include <stdio.h>

/*

	Escreva um programa C que utilize um vetor para armazenar um
	conjunto de N elementos inteiros, número este fornecido pelo 
	usuário. Verifique e imprima quantos desses elementos são 
	positivos e quantos são negativos

*/

int main()
{
	// VARIAVEIS //
	int i,j,k,n;
	j=0;
	k=0;

	// PROCESSAMENTO //
	printf("Informe quantos numeros irá calcular: \n");
	scanf("%d",&n);

	printf("Me informe os %d numeros: \n", n);
	int vet[n];

	for(i=0; i<n; i++)
	{
		printf("Me informe o %d numero: ", i+1);
		scanf("%d", &vet[i]);
	}
	

	for(i=0; i<n; i++)
	{
		if(vet[i]<0)
		{
			j++;
		}
		else
		{
			k++;
		}
	}

	// RESULTADO //
	printf("Dos numeros, %d sao postivos\n", k);
	printf("E %d sao negativos\n", j);

return 0;
}
