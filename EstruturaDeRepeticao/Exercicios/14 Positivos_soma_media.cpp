/*
14.	Programa para ler um n�mero N qualquer e imprimir todos os inteiros positivos menores que N, 
bem como a soma e a m�dia desses inteiros.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int num,i,soma;
	float media;
	
	soma = 0;
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);

	i = 1;
	
	do
	{
		printf("%d\n",num);
		soma = num + soma;
		i++;
		num--;
	}while(num > 0);
	
	media = soma/float(i);
	
	printf(" SOMA = %d\n",soma);
	printf(" MEDIA = %.2f\n",media);
	
    system("pause");
}
