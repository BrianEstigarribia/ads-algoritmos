/*
16	Fa�a um algoritmo para ler dois n�meros e imprimir o maior e 
o menor n�mero lido, acompanhados da mensagem Menor ou Maior, conforme o caso. 
Se iguais, imprimir os dois n�meros acompanhados da mensagem S�o iguais.
*/

#include <stdio.h>
#include <stdlib.h>	
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int numero_1,numero_2;
	
	printf("Digite dois n�meros: ");
	scanf("%d %d",&numero_1,&numero_2);

	
	if(numero_1 > numero_2)
	{
		printf("N�mero : %d � maior\n",numero_1);
		printf("N�mero : %d � menor\n",numero_2);
	}else
		if(numero_1 < numero_2)
		{
			printf("N�mero : %d � maior\n",numero_2);
			printf("N�mero : %d � menor\n",numero_1);
		}else
			if(numero_1 == numero_2 || numero_2 == numero_1)
			{
				printf("Os n�meros %d e %d sao iguais! ",numero_1,numero_2);
			}
	
	system("pause");	
}
