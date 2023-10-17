#include <stdio.h>
/*
QUESTÃO 05: O cardápio de uma lanchonete é 
o seguinte:  
 
Especificação Código Preço 
Cachorro quente 100  3,50 
Bauru simples   101  4,50 
Bauru com ovo   102  5,20 
Hamburger       103  3,00 
Cheeseburger    104  4,00 
Refrigerante    105  2,50 
 
Escrever um algoritmo que obtenha o código 
do item pedido, a quantidade e calcule o valor 
a ser pago.  
Considere que, a cada execução do algoritmo, 
somente será calculado o valor relacionado a 
um item. 
*/

int main ()
{
	float total=0, precoProduto=0;
	int codigoProduto=0, quantidadeProduto;
	
    for ( ;codigoProduto != 1;)
		
	{
		printf("Entre com o código do produto: ");
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
