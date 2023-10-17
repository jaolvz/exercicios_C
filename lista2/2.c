#include <stdio.h>
/*  QUEST�O 02: Escrever um algoritmo que 
obtenha o peso de uma pessoa na Terra e o 
n�mero de um planeta. Ao final, com aux�lio da 
tabela abaixo, calcular o peso desta pessoa no 
planeta escolhido. 
 
N�mero Planeta Gravidade Relativa g 
1 Merc�rio 0,37 
2 V�nus 0,88 
3 Marte 0,38 
4 J�piter 2,64 
5 Saturno 1,15 
6 Urano 1,17 
 
Para calcular o peso no planeta escolhido, 
utilize a seguinte f�rmula: 
 
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta 
*/
float  calcularPesoPlaneta(int planetaEscolhido, float pesoTerra);

int main (){
	
	float pesoTerra,pesoPlaneta;
	int planetaEscolhido =0;
	
	printf("Informe seu peso: ");
	scanf("%f",&pesoTerra);
	
	printf("Informe o o planeta:  ");
	scanf("%d",&planetaEscolhido);
	
	pesoPlaneta =  calcularPesoPlaneta(planetaEscolhido,pesoTerra);
	
	printf("Uma pessoa que pesa %0.2f na terra, pesa no planeta %i :  %0.2f",pesoTerra,planetaEscolhido,pesoPlaneta);
	
	
	 
	
	
	
}
 float calcularPesoPlaneta(int planetaEscolhido, float pesoTerra){
 	
 	float gravidadePlaneta=0;
 	
 	switch (planetaEscolhido) {
 			case 1:
 			gravidadePlaneta = 0.37;
 			break;
 			
 			
 		case 2: 
		 gravidadePlaneta= 0.88;
		 break;
		 
		 
		case 3:
		gravidadePlaneta = 0.38;
		break; 	
	
		case 4:
		gravidadePlaneta = 2.64;
		break; 	
		
			case 5:
		gravidadePlaneta = 1.15;
		break; 	
		
			case 6:
		gravidadePlaneta = 1.17;
		break; 		
	 }
	 
	 return  (pesoTerra/10) * gravidadePlaneta ;

 		
 	
 	
 }
