/*
9.	Escreva um algoritmo para ler o ano de nascimento de uma pessoa e 
escrever uma mensagem que diga se ela poder� ou n�o votar este ano 
(n�o � necess�rio considerar o m�s em que ela nasceu). 
ok
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float ano;
	
	printf("Informe o ano de nascimento: ");
	scanf("%f",&ano);
	
	if (ano <= 1998)
		printf("Permitido votar\n");
	else
		printf("Nao � permitido votar\n");	
	system("pause");
}  
