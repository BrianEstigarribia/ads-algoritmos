/*
8.	Ler um valor num�rico que esteja na faixa de valores de 1 at� 9.
 O programa deve apresentar a mensagem "O valor est� na faixa permitida", 
 caso o valor informado esteja entre 1 e 9. Se o valor estiver fora dessa faixa, 
 o programa deve apresentar a mensagem "O valor est� fora da faixa permitida".
 ok
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int val = 1;
	
	printf("Digite um valor: ");
	scanf("%d",&val);
	
	if(val <= 9)
		printf("O valor est� na faixa permitida\n");
	else
		printf("O valor est� fora da faixa permitida\n");
			
	system("pause");
}  
