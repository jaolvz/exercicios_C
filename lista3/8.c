#include <stdio.h>

/* QUEST�O 08: Em uma empresa deseja-se 
fazer um levantamento sobre algumas 
informa��es dos seus 250 funcion�rios. Cada 
funcion�rio 
dever� responder um question�rio ao qual informar� os seguintes 
dados: matr�cula, g�nero, idade, sal�rio e 
tempo (em anos) de trabalho na empresa. A 
execu��o do programa deve exibir os 
seguintes itens: 
a) Quantidade de funcion�rios que 
ingressaram na empresa com menos 
de 21 anos; 
b) Quantidade de funcion�rios do 
g�nero feminino; 
c) M�dia salarial dos homens; 
d) Matr�cula dos funcion�rios mais 
antigo e mais novo. */



int main (){
	
	int i,matricula,idade, tempoEmpresa, funcFeminino=0,matriculaVelha=0,matriculaNova=0,maisVelho, maisNovo,qtd21=0;

	float salario;
	char genero;
	
	# S� alterar a quantidade at� onde I vai.
	for(i=0;i<=1;i++){
		
		printf("Informe a sua matricula: ");
		scanf("%i",&matricula);


		fflush(stdin);
		printf("Informe o seu genero(F ou M ): ");
		scanf("%c",&genero);
		
		if(genero=='F'|| genero=='f' ){
			funcFeminino++;
		}
		
		printf("Informe a sua idade: ");
		scanf("%i",&idade);
		
		printf("Informe seu salario:  ");
		scanf("%f",&salario);
		
		
		
		printf("Informe em anos o seu tempo de empresa: ");
		scanf("%i",&tempoEmpresa);		
		printf("\n \n");
		if(idade-tempoEmpresa<21){
			qtd21++;
		}
		
				if(i==0){
			maisVelho=tempoEmpresa;
			maisNovo= tempoEmpresa;
			matriculaVelha = matricula;
			matriculaNova = matricula;
		}
		else
		{
			if (tempoEmpresa>=maisVelho)
			{
				maisVelho=tempoEmpresa;
				matriculaVelha = matricula;
			}
			if(tempoEmpresa<=maisNovo)
			{
				maisNovo=tempoEmpresa;
				matriculaNova = matricula;
			}
			
	
			
		}
		
		
	}
	
	
	printf("Quantidae que ingressou menor que 21 anos: %i \n",qtd21);
	
	printf("Quantidade de funcionarios do genero feminino: %i \n",funcFeminino);
	
	printf("Matricula do mais velho : %i \n ", matriculaVelha);
	
	printf("Matricula do mais novo : %i ", matriculaNova);
	
}
