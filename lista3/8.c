#include <stdio.h>

/* QUESTÃO 08: Em uma empresa deseja-se 
fazer um levantamento sobre algumas 
informações dos seus 250 funcionários. Cada 
funcionário 
deverá responder um questionário ao qual informará os seguintes 
dados: matrícula, gênero, idade, salário e 
tempo (em anos) de trabalho na empresa. A 
execução do programa deve exibir os 
seguintes itens: 
a) Quantidade de funcionários que 
ingressaram na empresa com menos 
de 21 anos; 
b) Quantidade de funcionários do 
gênero feminino; 
c) Média salarial dos homens; 
d) Matrícula dos funcionários mais 
antigo e mais novo. */



int main (){
	
	int i,matricula,idade, tempoEmpresa, funcFeminino=0,matriculaVelha=0,matriculaNova=0,maisVelho, maisNovo,qtd21=0;

	float salario;
	char genero;
	
	# Só alterar a quantidade até onde I vai.
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
