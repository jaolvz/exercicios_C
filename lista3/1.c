#include <stdio.h>
/* QUESTÃO 01: Faça um programa que leia um 
número inteiro positivo N e exiba todos os 
múltiplos de Y inferiores a N, onde N e Y são 
fornecidos pelo usuário. */

int main ()
{
	
	int N, Y,i;
	
	
	printf("Informe N: ");
	scanf("%i",&N);
	
	printf("Informe Y: ");
	scanf("%i",&Y);
	
	
	for(i=0;Y*i<N;i++)
	{
			printf("%i ",Y*i);
	
	}
	
	return 0;
}
