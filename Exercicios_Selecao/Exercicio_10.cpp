/*
7.Escreva um algoritmo para ler 2 valores (considere que n�o ser�o informados valores iguais) 
e escrever o maior deles.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a,b;
	
	printf("Informe um valor: ");
	scanf("%d",&a);
	
	printf("Informe um valor: ");
	scanf("%d",&b);
	
	if (a > b)
		printf("O maior �: %d\n",a);
	else
		printf("O maior �: %d\n",b);	
	
	system("pause");
}  
