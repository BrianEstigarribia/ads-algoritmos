/*-------------------------------------------------------------------------------------------
3.Fa�a um algoritmo que leia o valor do sal�rio de 35 funcion�rios e o valor do sal�rio m�nimo.
 Calcule e mostre a quantidade de sal�rios m�nimos que cada funcion�rio ganha.
 ok
--------------------------------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,""); //para usar acentos 
    float salario,salario_minimo,sm; //declara��o de v�riaveis 
    int contador = 0; //declara��o e inicializa com o valor 0
    
    for (contador = 1; contador <=35; contador ++)
    {
        printf("Digite o salario: ");
        scanf("%f",&salario);
        
        salario_minimo = 900;
        sm = salario / salario_minimo;
        
        printf("Voce ganha %.2f salarios minimos\n",sm);
    }
    //pausa no sistema antes do termino do programa 
    system("pause");
}
