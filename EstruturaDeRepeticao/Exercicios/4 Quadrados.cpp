/*
4.	Fa�a um programa que apresente os quadrados dos n�meros inteiros de 15 a 200
ok
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    int i, quadrado ;
    
    for(i = 15; i <= 200; i++)
    {
        quadrado = i * i; //NUMERO VEZES NUMERO BURRO!!
        printf("%d\n",quadrado);
    }
    system("pause");
}
