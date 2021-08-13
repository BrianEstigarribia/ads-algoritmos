/*
17.	 Desenvolva um algoritmo que crie uma fun��o para calcular o valor de uma pot�ncia de um n�mero qualquer. 
 Ou seja, ao informar para a fun��o o n�mero e sua pot�ncia dever� ser apresentado o resultado.
*/

#include <stdlib.h>
#include <stdio.h>

int pot(int base, int exp)
{
	if (exp == 0)
		return 1;
	else if(exp == 1)
		return base;
	
	return base * pot(base, exp - 1);
}

int main(int argc, char *argv[])
{
	int base, exp;
	
	printf("Base: ");
	scanf("%d", &base);
	printf("Expoente: ");
	scanf("%d", &exp);
	
	printf("\nResultado: %d\n", pot(base, exp));
	return 0;
}
