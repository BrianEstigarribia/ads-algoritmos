/*
exemplo 2 de whilecomapara��o de strings
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese"); //para usar acentos 
    char s [20]; //declara��o de uma string
    
    printf("Digite uma palavra: \n"); //pede ao usu�rio uma string
    scanf ("%s",s); //leitura de uma string e atribui o valor digitado a variavel s
    
    if((strcmp(s,"teste") == 0))  //compara��o de strings "s" e "teste"
        printf("Igual\n");
    else //sen�o
        printf("Diferente\n");  
	//pausa no sistema antes do termino do programa 
    system("pause");
}
