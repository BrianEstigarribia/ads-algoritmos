/*-------------------------------
Atribui��o de valores e opera��es
ok
--------------------------------*/

//bibliotecas necess�rias para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    //defini��o de variaveis       
	int a,b,c,d; 
	//atribuindo valores 
	a = 10;
	b = 20;
	//atribuindo opera��es 
	d = a + a;
	c = a + b;
	a = b + c;
	d = d + 1;
	//mostrando resultados na tela 
	printf("%d\n",a); //50
	printf("%d\n",b); //20
	printf("%d\n",c); //30
	printf("%d\n",c); //30
	printf("%d\n",d); //21
	//pausa no sistema antes do termino do programa 
	system("pause"); 
}
