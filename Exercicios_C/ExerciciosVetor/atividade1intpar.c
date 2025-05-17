#include <stdio.h>

/*
	Faça um programa que carregue um vetor com 10 elementos
	inteiros, calcule e mostre:
		A quantidade de números pares;
		Quais os números pares;
		A quantidade de números ímpares;
		Quais os números ímpares.
 */

int main()
{
	// VARIAVEIS //
	int i,j,k,vet[10];
	j=0;
	k=0;

	// PROCESSAMENTO //
	printf("Me diga 10 numeros\n");

	for(i=0; i < 10; i++)
	{
		printf("Informe o %d numero: ",i+1);
		scanf("%d",&vet[i]);
	}

	for(i=0; i < 10; i++)
	{
		if(vet[i] % 2 == 0)
		{
			printf("O numero %d eh par\n", vet[i]);
			j++;
		}
		else
		{
			printf("O numero %d eh impar\n", vet[i]);
			k++;
		}
	}

	// RESULTADO //
	printf("Temos, portanto, %d pares\n e %d impares\n", j,k);

return 0;
}
