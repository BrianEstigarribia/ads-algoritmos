/*
exemplo de c�digo com uso de for
ok
*/

//bibliotecas uteis para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int arc,char*argv[])
{
    setlocale(LC_ALL,"Portuguese");//para utilizar acentos 
    //decalara��o de v�rivaies 
    float ma,mediag,soma;
    int contador;
    //inicializa��o de v�riavel
    soma = 0;
    //informar 5 m�dias 
    for(contador = 1; contador <= 5; contador++)
    {
        printf("Informe a m�dia: ");
        scanf("%f",&ma);
        soma = soma + ma;
    }
    //calculo da m�dia geral 
    mediag = soma/contador;
    //mostrar m�dia geral 
    printf("A m�dia geral �: %.2f\n\n",mediag);  
    //pausa no sistema antes do termino do programa 
    system("pause");
    return 0;
}
