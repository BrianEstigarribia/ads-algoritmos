 /*Fazer um programa que recebe 2 vari�veis inteiras e deve fazer a m�dia aritm�tica. Imprimir o valor da
m�dia.
ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese"); //para utilizar acentos 
	int n1,n2;   //declara��o de v�riaveis 
	float media;
	
	printf("Digite n1:\n"); //pede que o usu�rio digite um n�mero 
	scanf("%d",&n1); //pega n�mero digitado e armazena na v�riavel n1
	
	printf("Digite n2:\n"); //pede que o usu�rio digite um n�mero 
	scanf("%d",&n2); //pega n�mero digitado e armazena na v�riavel n2
	
	media = (n1+n2)/2.0; //calculo da m�dia 
	//mostrar resultado do calculo na tela 
	printf("A m�dia e: %.2f\n",media);
	//pausa no sistema antes do termino do programa 
	system("pause");
	return 0;
}
