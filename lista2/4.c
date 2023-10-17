#include <stdio.h>
/* QUESTÃO 04: Desenvolva um algoritmo que 
calcule o consumo de combustível de um 
automóvel em determinada viagem. Para isso, 
devem ser obtidos: i) o percurso (em 
quilômetros) da viagem; ii) o número de 
quilômetros que o carro percorre com um litro 
de combustível (km/l); e iii) o preço do litro do 
combustível.  
 
Ao final, o algoritmo deve determinar: 
• A quantidade de combustível, em litros, 
consumida durante a viagem; 
• O custo total de combustível.
*/

int main (){
	float kmViagem, kmporLitro, precoCombustivel;
	
	printf("Quantos quilometros tem a viagem? ");
	scanf("%f",&kmViagem);
	
		printf("Quantos quilometros por Litro faz o carro ? ");
	scanf("%f",&kmporLitro);
	
		printf("Preco Combustivel:  ");
	scanf("%f",&precoCombustivel);
	
	
	printf(" A quantidade de combustível, em litros, consumida durante a viagem: %0.2f \n", kmViagem/kmporLitro);
	
	printf(" O custo total de combustível: %0.2f ", ( kmViagem/kmporLitro)*precoCombustivel );
	
	return 0;
}
