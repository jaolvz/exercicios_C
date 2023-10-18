#include <stdio.h>
/* QUESTÃO 03: Joãozinho investiu Q reais em 
uma aplicação com rendimento fixo de R% ao 
mês. Pede-se a implementação de um 
programa que calcule o valor (e exiba-o) 
disponível na conta de Joãozinho após A anos 
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
