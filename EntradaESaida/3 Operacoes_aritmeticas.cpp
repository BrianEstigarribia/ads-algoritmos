/* Fazer um programa que recebe 2 vari�veis do tipo float e as seguintes opera��es: soma, subtra��o,
multiplica��o, divis�o e raiz quadrada de cada uma das vari�veis. Retornar o valor de cada opera��o.
ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese"); //para utilizar acentos 
	float n1,n2; //declara��o de v�riaveis 
		
	printf("Digite um n�mero n1: \n"); //pede ao usuraio para digitar um n�mero
	scanf("%f",&n1); //pega o n�mero digitado e armazena na v�riavel n1
	
	printf("Digite outro n�mero n2: \n"); //pede ao usuraio para digitar um n�mero
	scanf("%f",&n2); //pega o n�mero digitado e armazena na v�riavel n2
	
	//mostrar resultado de calculos com as variaveis 
	printf("Soma de n1+n2 = %5.2f\n",n1+n2);          
	printf("Subtracao de n1-n2 = %5.2f\n",n1-n2);     
	printf("Multiplicacao de n1*n2 = %5.2f\n",n1*n2); 
	printf("Divisao de n1/n2 = %5.2f\n",n1/n2);       
	printf("Raiz de n1 = %5.2f\n",sqrt(n1));          
	printf("Raiz de n2 = %5.2f\n",sqrt(n2));          
	//pausa no sistema antes do termino do programa 
	system("pause"); 
	return 0;
}
