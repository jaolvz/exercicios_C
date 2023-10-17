#include <stdio.h>
/* QUESTÃO 01:
O custo ao consumidor de um carro novo é a 
soma do custo de fábrica com a porcentagem 
do distribuidor e dos impostos (aplicados ao 
custo de fábrica). Desenvolver um algoritmo 
que calcule o custo ao consumidor de 
determinado carro.*/


main ()
{
	
	float custo_fabrica = 0, porcentagem_distribuidor = 0 , porcentagem_imposto = 0, custo_final = 0;
	
	
	
	printf("Qual o custo de fabrica do carro? ");
	scanf("%f",&custo_fabrica);
	
	printf("Qual a porcentagem do distribuidor? ");
	scanf("%f", &porcentagem_distribuidor);
	
	printf("Qual a porcentagem do imposto ? ");
	scanf("%f",&porcentagem_imposto);
	
	
	porcentagem_distribuidor = (custo_fabrica/100) * porcentagem_distribuidor ;
	
	porcentagem_imposto = (custo_fabrica/100) * porcentagem_imposto ;
	
	custo_final  = custo_fabrica + porcentagem_imposto + porcentagem_distribuidor;
	
	
	printf("O custo final do carro e de R$ %0.2f",custo_final);
	
	
}
