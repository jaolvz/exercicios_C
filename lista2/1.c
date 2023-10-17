#include <stdio.h>
/*  
QUESTÃO 01: O IMC (Índice de Massa Corporal) 
é um critério da Organização Mundial de Saúde 
para dar uma indicação sobre a condição de 
peso de uma pessoa adulta. A fórmula é: 
 
IMC = peso / altura2 
 
Elabore um algoritmo que, dados o peso e a 
altura de um adulto, determine a sua condição 
de acordo com a tabela abaixo: 
 
IMC em adultos     Condição 
IMC < 18,5         Abaixo do peso 
18,5 = IMC < 25,0  Peso ideal 
25,0 = IMC < 30,0  Sobrepeso 
30,0 = IMC < 35,0  Obesidade grau I 
35,0 = IMC < 40,0  Obesidade grau II 
IMC = 40,0         Obesidade grau III  */

float imc (float peso, float altura);
int main ()
{
	float peso, altura;
	
	
	printf("Informe o seu peso:  ");
	scanf("%f",&peso);
	
	printf("Informe a sua altura: ");
	scanf("%f",&altura);
	
	
	imc(peso,altura);
	
	
	
	
}


float imc (float peso, float altura){
	
	float imc;
	
	
	imc = peso / (altura*altura);
	
	
	if ( imc < 18.5)
	{
		printf("IMC : %f Abaixo do peso",imc);
	}
	else if(imc>=18.5 && imc <25)
	{
		printf("IMC : %f Peso ideal",imc);
	}
	else if(imc>=25 && imc <30)
	{
		printf("IMC : %f Sobrepeso",imc);
	}
	else if(imc>=30 && imc <35)
	{
		printf("IMC : %f Obesidade  grau I",imc);
	}
	else if(imc>=35 && imc 40)
	{
		printf("IMC : %f  Obesidade  grau II",imc);
	}
	else
	{
		printf("IMC : %f  Obesidade  grau III",imc);
	}
	
	
	
	
	
	
}
 
