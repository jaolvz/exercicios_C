#include <stdio.h>
/* QUEST�O 04: Desenvolva um algoritmo que 
calcule o consumo de combust�vel de um 
autom�vel em determinada viagem. Para isso, 
devem ser obtidos: i) o percurso (em 
quil�metros) da viagem; ii) o n�mero de 
quil�metros que o carro percorre com um litro 
de combust�vel (km/l); e iii) o pre�o do litro do 
combust�vel.  
 
Ao final, o algoritmo deve determinar: 
� A quantidade de combust�vel, em litros, 
consumida durante a viagem; 
� O custo total de combust�vel.
*/

int main (){
	float kmViagem, kmporLitro, precoCombustivel;
	
	printf("Quantos quilometros tem a viagem? ");
	scanf("%f",&kmViagem);
	
		printf("Quantos quilometros por Litro faz o carro ? ");
	scanf("%f",&kmporLitro);
	
		printf("Preco Combustivel:  ");
	scanf("%f",&precoCombustivel);
	
	
	printf(" A quantidade de combust�vel, em litros, consumida durante a viagem: %0.2f \n", kmViagem/kmporLitro);
	
	printf(" O custo total de combust�vel: %0.2f ", ( kmViagem/kmporLitro)*precoCombustivel );
	
	return 0;
}
