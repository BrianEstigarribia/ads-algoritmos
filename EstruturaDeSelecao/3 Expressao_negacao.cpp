/*
If com express�o l�gica de nega��o
ok
*/

//bibliotecas uteis para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");           //para utilizar acentos 
	int a,b,c,x;                              //declara��o de v�riaveis 
      
    printf("Informe 3 valores: \n");          // pede 3 valores int ao user 
	scanf("%d %d %d", &x, &a, &b);            //pega os valores e armazena 
      
    if (!(x > 5))                             //se condi��o for v = f e se f = v
        c = (a + b) * x;  
    else                                      //sen�o
        c = (a - b) * x;
        
    printf("Valor de C : %d\n",c);            //mostrar valor de C 
    //pausa nos sistema antes do termino do programa   
    system("pause");
    return 0;
}
