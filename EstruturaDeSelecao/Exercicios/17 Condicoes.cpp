/*
17.	Ler dois n�meros inteiros.  Se forem iguais, imprimir a mensagem 'S�o iguais' 
e terminar o programa. Se forem diferentes, e o primeiro deles for par, ler um 
terceiro n�mero, imprimir o maior valor existente entre os tr�s e terminar; todavia, 
se o primeiro for �mpar, ler mais dois n�meros e imprimir o maior entre os dois primeiros
e o maior valor existente entre estes dois �ltimos, mas de modo que n�o apare�am na tela
em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>	
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int n1,n2,n3,n4;
	
	printf("Digite dois n�meros: ");
	scanf("%d %d",&n1,&n2);
	
	if(n1 == n2)
	{
		printf("Sao iguais");
	}else
		if(n1 != n2)
		{
			if(n1 % 2 == 0)
			{
				printf("Digite um terceiro n�mero: ");
				scanf("%d",&n3);
				
				if(n3 > n2 && n3 > n1)
				{
					printf("O maior �: %d",n3);
				}else
					if(n2 > n3 && n2 > n1)
					{
						printf("O maior �: %d",n2);
					}else
						if (n1 > n2 && n1 > n3)
						{
							printf("O maior �: %d",n2);
						}	
			}else
				{
					printf("Digite mais dois n�meros: ");
					scanf("%d %d",&n3,&n4);
					
					if(n3 > n4)
					{
						printf("O maior n�mero digitado dos ultimos foi %d\n",n3);
					}else
						{
							printf("O maior n�mero digitado dos ultimos foi %d\n",n4);
						}if(n1 > n2)
							{
								printf("O maior n�mero digitado dos primeiros foi %d\n",n1);
							}else
								{
									printf("O maior n�mero digitado dos primeiros foi %d\n",n2);
								}
				}
		}else
	system("pause");	
}
