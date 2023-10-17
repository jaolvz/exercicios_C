#include <stdio.h>
/*
QUESTÃO 07:
Escreva um algoritmo para calcular o salário 
semanal de uma pessoa, determinado pelas 
condições que seguem: se o número de horas 
trabalhado for inferior ou igual a 40, a pessoa 
recebe x reais por hora; caso contrário, a 
pessoa recebe um adicional de 50% para cada 
hora trabalhada acima das 40 iniciais. 
*/

int main ()
{
	float Hvalor, salario, adicional;
	int Htrabalhadas;
	
	printf("Informe o valor da hora trabalhada: ");
	scanf("%f",&Hvalor);
	
	printf("Informe a quantidade de horas trabalhadas:");
	scanf("%i",&Htrabalhadas);
	
	
	if(Htrabalhadas>40)
	{
		adicional = Htrabalhadas -40;
		Htrabalhadas = Htrabalhadas -adicional;
		adicional  = adicional * ( Hvalor*1.5);
		salario = Htrabalhadas  * Hvalor +adicional;
	}
	else
	{
		salario = Htrabalhadas * Hvalor;
	}
	
	
	printf("O salario calculado eh de R$%0.2f",salario);
	
	return 0;
}
