#include <stdio.h>
/* QUEST�O 01: Fa�a um programa que leia um 
n�mero inteiro positivo N e exiba todos os 
m�ltiplos de Y inferiores a N, onde N e Y s�o 
fornecidos pelo usu�rio. */

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
