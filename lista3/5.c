#include <stdio.h>
/* QUESTÃO 05: Faça um programa que exiba 
na tela os 50 primeiros termos da seguinte 
série: 1, -2, 3, -4, 5, -6 ... */


int main ()
{
	int i;
	
	for(i=0;i<=50;i++){
		if(i%2==0){
			printf(" %i ",i*-1);
		}
		else
		{
			printf(" %i ",i);
		}
		
	}
	
	
	return 0;
}
