#include <stdio.h>
/*
QUESTÃO 01: 
Dado um número inteiro N, fazer um 
programa que exiba os números pares 
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
