/*
9 Ler um vetor M de 10 elementos. Troque a seguir o 1�. 
elemento com o 6 �., o 2 �. com o 7 �., etc. at� o 5 �. com 10 �. e 
escreva o vetor M assim modificado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i,aux;
	int m[10];
	
	for (i=0;i<10;i++)
	{
		printf("m [%d] = ",i);
		scanf("%d",&m[i]);
	}
	
	for (i=0;i<5;i++)
	{
		aux    = m[i];
		m[i]   = m[i+5];
		m[i+5] = aux;
	}
	
	printf("\n");
	
	for (i=0;i<10;i++)
		printf("m [%d] = %d\n",i,m[i]);
		
	system("pause");
}
