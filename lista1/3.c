#include <stdio.h>
#include <string.h>
/* QUESTÃO 03:
Construir um algoritmo que calcule o peso ideal
de uma pessoa, de acordo com o seu gênero e 
altura, utilizando as seguintes fórmulas: 
? para homens: (72.7*h)-58
? para mulheres: (62.1*h)-44.7
*/


int main ()
{
	char genero;
	float altura, calculo;
	
	printf("Qual sua altura ? ");
	scanf("%f",&altura);
	

	
	printf("Qual seu genero? F ou M ");
		fflush(stdin);
	scanf("%c",&genero);
	

	if (genero =='M' )
	{
	calculo = (72.7*altura)- 58;
	
	printf("Seu peso ideal eh %0.2f",calculo);
	}
	
	else if (genero =='F' )
	{
	calculo = (62.1*altura)- 44.7;
	
	printf("Seu peso ideal eh %0.2f",calculo);
	}
	return 0;
}
