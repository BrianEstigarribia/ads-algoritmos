/*---------------------------
ordem e impress�o de n�meros 
ok
----------------------------*/

//bibliotecas necess�rias para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int val1,val2,val3; //declara��o de variaveis 
	//atribuindo diferentes valores as v�riaveis 
	val1 = 10;
	val2 = 20;
	val3 = val2 - val1;
	val3 = val1 - val2;
	//mostrar resultado das atribui��es na tela 
	printf("%d\n",val1); // 10
	printf("%d\n",val2); // 20
	printf("%d\n",val3); //-10
	//pausa no sistema antes do termino do programa 
	system("pause");
}
