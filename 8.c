#include <stdio.h>
#include <ctype.h>
/* Faça um algoritmo para calcular a conta final de 
um hóspede de um hotel, considerando que:

a) Devem ser obtidos o nome do hóspede, o 
tipo do apartamento utilizado (A, B, C ou D), 
o número de diárias utilizadas pelo hóspede 
e o valor do consumo interno do hóspede;

b) O valor da diária é determinado pela 
seguinte tabela:
Tipo de Apartamento Valor da diária
A R$ 350,00
B R$ 275,00 
C R$ 200,00
D R$ 150,00

c) O valor da taxa de serviço equivale a 
10% da conta.

A conta a ser apresentada ao cliente deve 
conter: o nome do hóspede, o tipo do 
apartamento, o valor total das diárias, o 
valor do consumo interno, o subtotal, o 
valor da taxa de serviço e o total geral */


int main ()
{
	char nome[20], tipoApartamento;
	int numeroDiarias;
	float valorConsumo,valorDiaria,subTotal,valorFinal,taxaServico;
	
	
	printf("Entre com o nome do cliente: ");
	scanf("%s",&nome);
	fflush(stdin);
	printf("Entre com o tipo de apartamento: ");
	scanf("%c",&tipoApartamento);
	
	printf("Quantidade de diarias: ");
	scanf("%d",&numeroDiarias);
	
	printf("Informe o valor de consumo do cliente:  ");
	scanf("%f",&valorConsumo);
	
	
	tipoApartamento = toupper(tipoApartamento);
	
	switch (tipoApartamento)
	{
		case 'A' :
			
			valorDiaria = 350;
			break;
			
		case 'B'  :
			
			valorDiaria = 275;
			break;
		
		case 'C'  :
			
			valorDiaria = 200;
			break;
		
		case'D'  :
			
			valorDiaria = 150;
			break;
		
	}
		valorDiaria=valorDiaria*numeroDiarias;
		subTotal = valorDiaria+ valorConsumo;
		taxaServico = subTotal * 0.1;
		valorFinal = subTotal + taxaServico;

	printf("Contra do cliente %s \n",nome);
	printf("Tipo de apartamento : %c \n",tipoApartamento);
	printf("Valor total das diarias: %0.2f \n", valorDiaria);
	printf("Valor do consumo interno: %0.2f \n", valorConsumo);
	printf("Subtotal : %0.2f \n",subTotal);
	printf("Taxa de servico : %0.2f \n", taxaServico);
	printf("Total : %0.2f",valorFinal);
		
	
	
	return 0;
}
