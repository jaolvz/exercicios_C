#include <stdio.h>
/*
QUEST�O 07:
Escreva um algoritmo para calcular o sal�rio 
semanal de uma pessoa, determinado pelas 
condi��es que seguem: se o n�mero de horas 
trabalhado for inferior ou igual a 40, a pessoa 
recebe x reais por hora; caso contr�rio, a 
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
