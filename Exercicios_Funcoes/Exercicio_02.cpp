/*
2.Construa uma fun��o que verifique se um n�mero inteiro, passado como par�metro, � par,
 retornando  1 se verdadeiro e 2 caso contr�rio.
*/

#include <stdio.h>
#include <stdlib.h>

int e_par(int num)
{

	if(num % 2 == 0)
	{
		return 1;
	}else
		{
			return 2;
		}
}
main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	num = e_par(num);
	
	printf("%d\n",num);
	
	system("pause");
}
