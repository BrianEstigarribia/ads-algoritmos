/*
2. Fazer um algoritmo para receber um n�mero decimal 
e o peso de cada n�mero at� que o usu�rio digite o n�mero 0.
 Fazer a m�dia ponderada desses n�meros e pesos respectivos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    float num,peso,media;

    do{
    	printf("Digite um n�mero decimal: ");
    	scanf("%d",&num);
    	
    	printf("Digite o peso deste n�mero: ");
    	scanf("%d",&peso);

	}while(num != 0);
	
	media = (num+num)/peso;
	
	printf("A m�dia dos n�meros digitados �: %5.2f \n",media);
	
    system("pause");
}
