#include <stdio.h>

/*
QUESTÃO 03: As vendas parceladas se 
tornaram uma ótima opção para os lojistas que, 
a cada dia, criam novas promoções para tentar 
conquistar novos clientes. Faça um algoritmo 
que permita ao lojista informar o preço do 
produto e receber as seguintes informações: 
 
a) O valor com 10% de desconto para 
pagamento à vista; 
b) O valor da prestação para parcelamento 
sem juros, em 5x; 
c) O valor da prestação para parcelamento 
com juros, em 10x, com 20% de acréscimo 
no valor do produto.
*/


int main (){
	
	float precoProduto;
	
	printf("Informe o preco do produto: ");
	scanf("%f",&precoProduto);
	
	
	
	printf("Esse eh o preco do produto a vista: %0.2f \n",precoProduto-(precoProduto/10));
	
	printf("O valor da prestacao em 5x, sem juros :%0.2f \n", precoProduto/5);
	
	printf("O valor da prestacao em 10x, com juros de 20 por cento do valor do produto : %0.2f",(precoProduto+precoProduto/5) / 10) ;
	
	
	return 0;	
}
