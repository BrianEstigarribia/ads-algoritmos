/*Fazer um programa que recebe 3 vari�veis do tipo float e faz a m�dia ponderada. O 1� valor tem peso 1, o 2�
valor tem peso 3 e o 3� valor tem peso 2.
ok
*/

//bibliotecas para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese"); //para uso de acentos 
	float v1,v2,v3,media; //declara��o de vari�veis 
	
	printf("Digite m�dia1 :\n"); //pede um n�mero ao usu�rio 
	scanf("%f",&v1); //pega o n�mero digitado e armazena na v�riavel v1
	
	printf("Digite m�dia2 :\n"); //pede um n�mero ao usu�rio 
	scanf("%f",&v2); //pega o n�mero digitado e armazena na v�riavel v2
	
	printf("Digite m�dia3 :\n"); //pede um n�mero ao usu�rio 
	scanf("%f",&v3); //pega o n�mero digitado e armazena na v�riavel v3
	
	media = (v1*1+v2*3+v3*2)/(1+2+3); //calculo da m�dia 
	//mostrar resultado do calculo na tela 
	printf("M�dia: %.2f\n",media);
	//pausa no sistema antes do termino do programa 
	system("pause");
	return 0;
}
