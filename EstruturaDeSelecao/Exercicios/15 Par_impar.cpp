/*
15	Escreva um algoritmo para ler um n�mero inteiro (considere que ser�o lidos 
apenas valores positivos e inteiros) e escrever se � par ou �mpar.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if (num % 2 == 1)
		printf("N�mero impar\n");
	else 
		printf("N�mero par\n");	
	
	system("pause");
}
