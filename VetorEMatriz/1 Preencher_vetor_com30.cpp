/*
Preencher um vetor X de 10 elementos (�ndices de 0 a 9) com o valor inteiro 30. 
Escrever o vetor X, ap�s seu total preenchimento.

ok
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    int i;     //inicaliza a variavel 'i' contador do tipo inteiro
    int x[10]; //inicializa o vetor 'x' com 10 posi��es do tipo inteiro
    
    //preencher vetor x
    for(i = 0; i <= 10; i++) //percorre 10 elementos
    {
        x[i] = 30; //atribui o valor 30 a cada posi��o
    }
    //mostrar resultado na tela 
    for(i = 0; i < 10; i++) //percorre 10 elementos 
    {
        printf ("x[%d] = %d\n",i,x[i]); //posi��o(contador) e preenchimentode 'x' (30)
    }
    
    system("pause");
}
