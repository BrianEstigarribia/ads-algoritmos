/*
  exemplo 02 de if else com expres�es l�gicas
  ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese"); //para usar acentos 
	char sexo; //declara��o de v�riaveis 
      
    printf ("Informe o sexo: "); //pede ao usu�rio a digita��o de um caracter 
    scanf("%c",&sexo); //pega o caractere digitado e armazena na v�riavel sexo 
      
    if(sexo == 'M' || sexo == 'm' || sexo == 'F'|| sexo == 'f') //condi��o e compara��o de strings digitadas 
         printf("Sexo v�lido\n");
    else //sen�o
        printf("Sexo inv�lido\n");
    //pausa no sistema antes do termino do programa     
    system("pause");    
	return 0;            
}      
