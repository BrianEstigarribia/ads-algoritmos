/*
Preencher um vetor A de 10 elementos (�ndices de 0 a 9) com os n�meros 
inteiros 10,20,30,40,50,...,100. Escrever o vetor A ap�s o seu total 
preenchimento
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    int i;
    int x[10];
    
    //preenche vetor de 10 elementos 
    for (i = 0; i <= 10; i++)
    {
        x[i] = i + 10; //contagem de 10 em 10
    }
    
    //mostra os valores preeenchidos 
    for(i = 0; i <= 10; i++)
    {
        printf("A [%d] = %d\n",i,x[i]); //posi��o e preenchimento
    }
    system("pause");
}
