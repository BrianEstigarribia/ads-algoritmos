/*
Sele��o composta
ok
*/

//bibliotecas uteis para funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese"); //para usar acentos 
    float salario,sr; //declara��o de v�riaveis 
      
    printf("Informe o sal�rio: "); //pede a informa��o ao usu�rio 
    scanf("%f",&salario); //pega a informa��o e armazena na v�riavel salario
      
    if (salario < 500) //condi��o caso sal�rio menor que 500
 		sr = (salario * 1.15);
    else // sen�o
        sr = (salario * 1.05);
    //mostrar reajuste na tela conforme a condi��o      
    printf("Sal�rio com reajuste: %.2f\n", sr);  
    //pausa no sistema antes de finalizar o programa 
    system("pause"); 
	return 0;    
}    
