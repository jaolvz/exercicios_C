#include <stdio.h>
#include <string.h>
/* QUESTÃO 02:
Elabore um algoritmo que, dada a idade de um 
nadador, classifique-o em uma das seguintes 
categorias: 
Categoria Faixa de idade
infantil A 0 - 4 anos
infantil B 5 - 7 anos
infantil C 8-10 anos
juvenil A 11-13 anos
juvenil B 14-17 anos
Adulto 18 anos ou mais
*/



main()
{
int idade;	
char classificacao[30] ;

printf("Informe sua idade: ");	

scanf("%d",&idade);

if (idade>=0 && idade <= 4)
{ 
 strcpy(classificacao, "Infantil A");
	}
	else if (idade>4 && idade<=7)
	{
		 strcpy(classificacao, "Infantil B");
		}	
	else if ( idade>7 && idade<=10)
	{
		 strcpy(classificacao, "Infantil V");
	}
	else if ( idade>10 && idade<=13)
	{
		 strcpy(classificacao, "Juvenil A");
}
	else if (idade>13 && idade<=17)
	{
		 strcpy(classificacao, "Juvenil B");
	}
	else if (idade>17)
	{
	 strcpy(classificacao, "Adulto");
	}
	
	
printf(classificacao);	
	
	
}


