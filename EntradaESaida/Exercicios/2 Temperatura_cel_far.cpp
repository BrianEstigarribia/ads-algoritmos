/*-----------------------------------------------------------------
  2 Escreva um algoritmo para ler uma temperatura em graus Celsius, 
  calcular e escrever o valor correspondente em graus Fahrenheit.
  ok
------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"portuguese"); //para usar acentos 
    float fahrenheit,celsius; //declara��o de v�riaveis 
     
    printf("Entre com a temperatura em Celsius: "); //pede ao usuario um valor 
    scanf("%f",&celsius); //le o valor digitado e armazena na v�riavel celsius
    //atribuindo opera��es as v�riveis  
    fahrenheit = (((9 * celsius )/ 5 )+ 32);
    //mostra resultado do opera��o/processamento 
    printf("%3.1f graus Celsius sao %3.1f Fahrenheit.\n",celsius,fahrenheit);
    //pausa no sistema antes do termino do programa 
    system("pause"); 
}
