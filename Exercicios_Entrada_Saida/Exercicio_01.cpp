/*-------------------------------------
Mostrar opera��es aritm�ticas na tela
ok
--------------------------------------*/

//bibliotecas necess�rias para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//m�todo pr�ncipal(inicio do programa)
int main()
{//inicio do c�digo
	setlocale(LC_ALL,"Portuguese");
	//declara��o de variaveis 
	int a,b;
	float x,y;
	//atribui��o de valores a variaveis 
	a = 1;
	b = a + 2;
	x = a / b;
	b = b + 1;
	a = a - 1;
	y = b / 2;
	a = a + 2;
	y = b % (a + 1);
	//mostrar valores das atribui��es na tela 
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%.1f\n",x);
	printf("%.1f\n",y);
	//pausa antes do termino do programa 
	system("pause");
}//fim do c�digo e do programa
