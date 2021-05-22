/*----------------------------------------------------------------------
  3 Escreva um algoritmo para ler o n�mero de eleitores de um munic�pio, 
  o n�mero de votos brancos, nulos e v�lidos. Calcular e escrever o 
  percentual que cada um representa em rela��o ao total de eleitores.
  ok
-----------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese"); //para usar acentos 
	int eleitores,brancos,nulos,validos;        //declara��o de v�riaveis 
	float perc_brancos,perc_nulos,perc_validos;
	
	printf("Informe o n�mero de eleitores:      \n"); //pede ao usuario um valor 
	scanf ("%d",&eleitores); //le o valor digitado e armazena na v�riavel eleitores
	 
	printf("Informe o n�mero de votos validos:  \n"); //pede ao usuario um valor 
	scanf ("%d",&validos); //le o valor digitado e armazena na v�riavel validos
	
	printf("Informe o n�mero de votos em branco:\n"); //pede ao usuario um valor 
	scanf ("%d",&brancos); //le o valor digitado e armazena na v�riavel brancos
	
	printf("Informe o n�mero de votos nulos :   \n"); //pede ao usuario um valor 
	scanf ("%d",&nulos); //le o valor digitado e armazena na v�riavel nulos
	//atribuindo opera��es as v�riveis 
	perc_validos = (float(validos) / eleitores) * 100;
	perc_brancos = (float(brancos) / eleitores) * 100;
	perc_nulos   = (float(nulos)   / eleitores) * 100;
	//mostra resultado do opera��o/processamento
	printf("%5.2f%% de votos v�lidos.  \n",perc_validos);
	printf("%5.2f%% de votos em branco.\n",perc_brancos);
	printf("%5.2f%% de votos nulos.    \n",perc_nulos);
	//pausa no sistema antes do termino do programa 
	system("pause");
}
