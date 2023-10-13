#include <stdio.h>
/* Escrever um algoritmo que, dada uma quantia 
em reais, calcule o menor número possível de 
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que 
o valor pode ser decomposto. */



int main (){
	 int quantiaDinheiro, quantidadeNotas=0,resto;
	 
	 printf("Digite a quantia em dinheiro: ");
	 scanf("%d",&quantiaDinheiro);
	 

	 	
	 	while(quantiaDinheiro>=100){	
		resto =quantiaDinheiro%100;
	 	quantiaDinheiro =quantiaDinheiro/100;
	 	quantidadeNotas= quantidadeNotas + quantiaDinheiro;
	 	quantiaDinheiro=resto;
		 }
		 while(quantiaDinheiro>=50){	
		resto =quantiaDinheiro%50;
	 	quantiaDinheiro =quantiaDinheiro/50;
	 	quantidadeNotas= quantidadeNotas + quantiaDinheiro;
	 	quantiaDinheiro=resto;
		 }
		 
		 while(quantiaDinheiro>=20){	
		resto =quantiaDinheiro%20;
	 	quantiaDinheiro =quantiaDinheiro/20;
	 	quantidadeNotas= quantidadeNotas + quantiaDinheiro;
	 	quantiaDinheiro=resto;
		 }
		 
		 while(quantiaDinheiro>=10){	
		resto =quantiaDinheiro%10;
	 	quantiaDinheiro =quantiaDinheiro/10;
	 	quantidadeNotas= quantidadeNotas + quantiaDinheiro;
	 	quantiaDinheiro=resto;
		 }
		 
		 while(quantiaDinheiro>=5){	
		resto =quantiaDinheiro%5;
	 	quantiaDinheiro =quantiaDinheiro/5;
	 	quantidadeNotas= quantidadeNotas + quantiaDinheiro;
	 	quantiaDinheiro=resto;
		 }
		 
		 while(quantiaDinheiro>=2){	
		resto =quantiaDinheiro%100;
	 	quantiaDinheiro =quantiaDinheiro/2;
	 	quantidadeNotas= quantidadeNotas + quantiaDinheiro;
	 	quantiaDinheiro=resto;
		 }
		 
		quantidadeNotas++;
		 
		 	 


	printf("Quantidade de notas necessarias eh de : %i",quantidadeNotas);
	printf(" %i",quantiaDinheiro);
	 
	return 0;
}
