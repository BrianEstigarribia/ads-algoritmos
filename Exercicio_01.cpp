/*
1.Construa um algoritmo que possua uma fun��o que leia uma vari�vel inteira e uma procedure que escreva esta vari�vel.  
*/

#include <stdio.h>
#include <stdlib.h>

int res;

int ler_variavel()
{
	
	printf("Digite um numero: ");
	scanf("%d",&res);
	
	return (res);
}

void escrever_variavel()
{
	printf("A variavel digitada foi : %d\n",res);
}

main()
{
	ler_variavel();
	escrever_variavel();
	
	system("pause");
}
