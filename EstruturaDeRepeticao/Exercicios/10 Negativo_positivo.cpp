/*
10.	Escreva um algoritmo para repetir a leitura de um n�mero enquanto o valor fornecido for diferente de 0. 
Para cada n�mero fornecido, imprimir se ele � NEGATIVO ou POSITIVO. 
Quando o n�mero 0 for fornecido a repeti��o deve ser encerrada sem imprimir mensagem alguma.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i,num;
	
	i = 1;
	while(num != 0)
	{
		printf("Digite um n�mero: ");
		scanf("%d",&num);
		
		if(num < 0)
		{
			printf("NEGATIVO\n");
		}else
			if(num > 0)
			{
				printf("POSITIVO\n");
			}
			
		i++;
	}
    system("pause");
}
