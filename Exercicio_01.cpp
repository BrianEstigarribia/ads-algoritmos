/*
1. Fazer um algoritmo para receber n�meros decimais at� que o usu�rio digite 0 e fazer a m�dia aritm�tica desses n�meros. 
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    float num,cont;
    
    cont = 0;
    do
    {
        printf("Digite um n�mero decimal: ");
        scanf("%f",&num);
        cont++;
    } 
    while(num != 0);
    
    system("pause");
}
