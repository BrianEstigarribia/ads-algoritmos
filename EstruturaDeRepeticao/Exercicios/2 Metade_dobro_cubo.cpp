/*-----------------------------------------------------------------------------
2.	Fa�a um algoritmo que leia 22 n�meros inteiros positivos maiores que zero. 
A cada n�mero informado calcule e mostre:

a.	O n�mero digitado;
b.	A metade do n�mero digitado;  /2
c.	O dobro do numero digitado;  *2 
d.	O n�mero digitado ao cubo.  *3
ok
-------------------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,""); //para usar acentos 
    int num, dobro, cubo,contador;  //declara��o de v�riaveis 
    float metade;
    //inicializa a variavel com o valor 0
    contador = 0;
    
    for (contador = 1; contador <=22;contador++) //contar 22 numeros 
    {
        printf("Digite um numero inteiro: "); //pede ao usuario um valor 
        scanf("%d",&num); //le o valor digitado e armazena na v�riavel num
        //atribui opera��es as v�riaveis 
        dobro = num *2;
        cubo = num *3;
        metade = num /2;
        //mostra resultado das opera��es 
        printf("O numero digitado eh: %d\n",num);
        printf("A metade do numero digitado: %f\n",metade);
        printf("O dobro do numero digitado: %d\n",dobro);
        printf("O numero digitado ao cubo: %d\n",cubo);
    }
    //pausa no sistema antes do termino do programa 
    system("pause");
}
