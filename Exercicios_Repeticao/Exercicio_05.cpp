/*
2.Escreva um algoritmo para ler um n�mero inteiro e escrev�-lo na tela 10 vezes.
ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
    int num,contador;
    contador = 0;
    
    printf("Digite um n�mero inteiro: ");
    scanf("%d",&num);
    
    while(contador <=10)
    {
        printf("%d\n",num);
        contador++;
    }
    
    system("pause");
}
