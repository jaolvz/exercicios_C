#include <stdio.h>
 /* QUESTÃO 02: Faça um programa que exiba 
todos os elementos da seguinte série, assim 
como a soma destes elementos: 
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1 */

int main ()
{
	int i,y, soma=0;
	
	for (i=1,y=50;i<51;i++,y--){
		
		printf("%i, %i, ",i,y);
		soma= soma +i+y;
	}
	printf("\nSoma %i",soma);
	return 0;
}

