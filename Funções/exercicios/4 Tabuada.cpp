/*
4.	Fa�a uma procedure que recebe, por par�metro, um valor N e calcula e escreve a tabuada de 1 at� N. Mostre a tabuada na forma:
1 x N = N 
2 x N = 2N 
... 
N x N = N2 

*/

#include <stdio.h>
#include <stdlib.h>

void tabuada(int num)
{
	int i;
	
	for(i=1;i<=num;i++)
	{
		printf("%d * %d = %d\n",i,num,i*num);
	}
}

main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	tabuada(num);
	
	system("pause");
}
