/*
Escreva um algoritmo que leia um vetor de 50 posi��es de n�meros 
inteiros e mostre somente os positivos com suas respectivas posi��es.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"");
    int num[5];
    int cont;
    
    printf("Digite 50 n�meros\n");
    for (cont=0;cont<=5;cont++)
    {
        printf("Digite um n�mero: ");
        scanf("%d",&num[cont]);
    }
    
    for (cont=0;cont<=5;cont++)
    {
        if(num[cont] > 0)
            printf("a[%d] = %d\n",
            cont,num[cont]);
    }
    
    system("pause");
}
