#include <stdio.h>
/* QUEST�O 04: Fa�a um programa que leia 
300 n�meros reais. Ao final, devem ser 
exibidas as seguintes informa��es: 
a) A quantidade de valores negativos 
digitados; 
b) A m�dia dos valores positivos.  */


int main ()
{
	int i,n,negativos=0,positivos=0,somaPositivos=0;
	
	for(i=0;i<10;i++){
		printf("Digite um numero: ");
		scanf("%i",&n);
		
		if(n>=0){
			positivos++;
			somaPositivos=somaPositivos+n;
		}
		else
		{
			negativos++;
		}
	
		}

	
	printf(" A media dos positivos eh de %i \n",somaPositivos/positivos);
	
	printf("Quantidade de negativos eh de %i",negativos);
	
	return 0;
}
