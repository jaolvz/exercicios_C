#include <stdio.h>
/*
QUEST�O 05: O card�pio de uma lanchonete � 
o seguinte:  
 
Especifica��o C�digo Pre�o 
Cachorro quente 100  3,50 
Bauru simples   101  4,50 
Bauru com ovo   102  5,20 
Hamburger       103  3,00 
Cheeseburger    104  4,00 
Refrigerante    105  2,50 
 
Escrever um algoritmo que obtenha o c�digo 
do item pedido, a quantidade e calcule o valor 
a ser pago.  
Considere que, a cada execu��o do algoritmo, 
somente ser� calculado o valor relacionado a 
um item. 
*/

int main ()
{
	float total=0, precoProduto=0;
	int codigoProduto=0, quantidadeProduto;
	
    for ( ;codigoProduto != 1;)
		
	{
		printf("Entre com o c�digo do produto: ");
		scanf("%i",&codigoProduto);
		
		printf("Quantidade:  ");
		scanf("%i",&quantidadeProduto);
		
		
		switch (codigoProduto)
		{
			case 101:
			
			precoProduto =4.50;
			break;
			
			case 100:
				precoProduto  = 3.50;
				break;
				
			
			case 102:
				precoProduto = 5.20;
				break;
				
			case 103:
			precoProduto = 3.00;
			break;
			
			case 104:
			precoProduto = 4.00;
			break;
			
			case 105:
			precoProduto = 2.50;
			break;	
		}
		
		total  =  total + ( precoProduto*quantidadeProduto);
		
		
		
		
		}	
	
	printf(" Total da compra : %0.2f",total);
	
	
	return 0;
}
