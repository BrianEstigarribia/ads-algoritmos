/*
8 Ler um vetor X de 10 elementos. Crie um vetor Y da seguinte forma. 
Os elementos de ordem par de Y (elementos com �ndice 0,2,4,6,8) receber�o os respectivos 
elementos de X multiplicados por 2. Os elementos de ordem �mpar de Y (elementos com �ndices 1,3,5,7,9) 
receber�o os respectivos elementos de X multiplicados por 3. Escrever o vetor Y. 
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int i;
	int x[10];
	float y [10];
	
	for (i=1;i<11;i++)              //ler vetor X de 10 elementos 
	{
		printf("x [%d] = ",i);      //pede um n�mero 
		scanf("%d",&x[i]);			//le o numero digitado e armazena na variavel X indice de 0 a 9
	}
	
	for (i=1;i<11;i++)               //vetor Y de 10 posi��es
		if (i%2 == 0)                //se elementos de ordem par de X
			y[i] = (float) x[i] * 2; //respectivos elementos de X x2	
		else                         //se n�o (ordem impar)
			y[i] = (float) x[i] * 3; //multiplica por 3
	
	printf("\n");
	
	for (i=1;i<11;i++)               //escrever o vetor Y
		printf("y [%d] = %.1f\n",i,y[i]);		
	system("pause");
}
