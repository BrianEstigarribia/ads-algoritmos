/*
blocos de comandos 
ok
*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese"); //para usar acentos 
    int a,b,c,d,x; //declara��o de v�riaveis 
      
    printf("Informe 3 valores: "); //pede ao �suario 3 valores 
    scanf("%d %d %d", &x, &a, &b); //pega os valores digitados e armazena nas variaveis 

    if (!(x > 5))  //se condi��o v = f j� se condi��o f = v
    {                                  //incio do bloco if 
        c = (a + b) * x;
        d = a + 1;
    }                                  //fim do bloco if 
    else 
    {								   //incio do bloco else
        c = (a - b) * x;
        d = b + 1;
    }                                  //fim do bloco else
    //mostrar valores p�s condi��es    
    printf ("Valor de c: %d\n",c); 
    printf ("Valor de d: %d\n",d); 
    //pausa no sistema antes de finalizar o programa    
    system("pause");
    return 0;
}
