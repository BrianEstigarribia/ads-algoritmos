/*Fa�a um programa que escreva o seu nome numa s� linha, 
utilizando apenas um printf.
ok
*/

//bibiotecas �teis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese"); //permite o uso de acentos 
	//mostrar mensagem na tela 
	printf("Brian\n");
	//pausa no sistema antes do termino do programa 
	system("pause"); 
	return 0;
}
