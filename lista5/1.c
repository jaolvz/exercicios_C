#include <stdio.h>
/*
QUEST�O 01: 
Dado um n�mero inteiro N, fazer um 
programa que exiba os n�meros pares 
iguais ou inferiores a N.   */


int main ()
{
	int n,i;
	
	printf("Defina N: ");
	scanf("%i",&n);
	
	for(i=0;i<=n;i=i+2){
		
		printf("%i ",i);
	}
	
}
