/*
  Exemplo de if com operadores relacionais
  ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese"); //para usar acentos
    int numero; //declara��o de v�riaveis 
      
    printf ("Informe um n�mero: "); //pede que o usu�rio digite um valor 
    scanf ("%d",&numero); //pega o valor e armazena na v�riavel numero
      
    if(numero >= 20 && numero <= 90) //condi��o do intervalo de n�meros aceitos
        printf("N�mero v�lido, est� no intervalo.\n");
    else //sen�o
    	printf("N�mero inav�lido.\n");  
	//pausa no sistema antes do termino do programa 	  
    system("pause");
    return 0;
}      
