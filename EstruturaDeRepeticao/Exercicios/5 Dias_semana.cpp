/*
5.	Fa�a um programa que leia o dia da semana (Domingo, Segunda, Ter�a, Quarta, Quinta, Sexta e Sabado). 
Esse dia deve ser um texto. Se for S�bado ou Domingo imprimir "Final de Semana", sen�o imprimir "Dia �til". 
Dica: Utilizar a fun��o de compara��o de string strcmp
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char dia[10];
    
    printf("Digite o dia da semana: ");
    scanf("%s",&dia);
    
    if((strcmp(dia,"Sabado") == 0) || (strcmp(dia,"Domingo") == 0))  //compara��o de strings "s" e "teste"
        printf("Final de Semana\n");
    else //sen�o
        printf("Dia util\n");  
            
    system("pause");
}
