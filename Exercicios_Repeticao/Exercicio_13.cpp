/*----------------------------------------------------------------
5.	Ler um n�mero inteiro N (s� aceitar valores positivos. 
Caso o N n�o seja positivo dever� ser lido um novo valor para o N) 
e escrever se � ou n�o um n�mero PRIMO.
ok ERRO
--------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,""); //para usar acentos 
    int n, i, c; //declara��o de v�riaveis 
    
    do //fa�a 
    {
        printf("Digite um  n�mero: "); //pede ao usu�rio um valor 
        scanf("%d",&n); //le o valor digitado e atribui a variavel n
    }while(n <= 0); //enquanto numero digitado for menor que 0
    
    c = 0; //inicializa a v�riaveel com o valor 0
    for(i = 1; i <= n; i++) 
    {
        if (n%i == 0)
            c = c + 1;
        if ( c <= 2)
       		printf("E primo\n");
     	else 
        	printf("Nao eh primo\n");
	}
	//pausa no sistema antes do termino do programa 
    system("pause");
}
