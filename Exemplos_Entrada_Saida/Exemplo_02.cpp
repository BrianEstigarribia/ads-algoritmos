/*
Programa que pegue 2 valores e mostre os valores digitados e a soma destes.
ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese"); //para utilizar acentos 
	int j,k; // declara��o de variaveis 
	
	printf("Digite o valor de k: \n");  //solicitar valor ao usu�rio
	scanf("%d", &k);                    //Ler valor clicado
	 
	printf("Digite o valor de j: \n");  //solicitar valor ao usu�rio
	scanf("%d", &j);                    //Ler valor clicado
	
	printf("Voc� digitou k = %d j= %d\n ", k, j);    //pegar os valores digitados no scanf e mostrar na tela 
	printf("A soma de %d e %d = %d\n", k, j, k + j); //realizar calculo de soma com os valores digitados pelo usu�rio
	//pausa no sistema antes do termino do programa 
	system("pause");
	return 0;
}
