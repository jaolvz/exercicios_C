#include <stdio.h>
/* QUEST�O 03: Jo�ozinho investiu Q reais em 
uma aplica��o com rendimento fixo de R% ao 
m�s. Pede-se a implementa��o de um 
programa que calcule o valor (e exiba-o) 
dispon�vel na conta de Jo�ozinho ap�s A anos 
de investimento. */

int main ()
{
	float Q,R,renda;
	int A;
	
	
	printf("Valor investido: ");
	scanf("%f",&Q);
	
	printf("Rendimento fixo: ");
	scanf("%f",&R);
	
	printf("Em quantos anos: ");
	scanf("%i",&A);
	
	
	renda = Q+ ((Q/100)*R)*A;
	
	printf("Em %i anos, Joaozinho tera %0.2f na sua conta bancaria ",A,renda);
	
	
}
