/*
20.	Escreva um algoritmo que calcule a m�dia aritm�tica das 3 notas dos alunos de uma classe.
 O algoritmo dever� ler, al�m das notas, o c�digo do aluno e dever� ser encerrado quando o c�digo for igual a zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int n1,n2,n3,cod;
	float media;
	
	do
	{
		printf("Digite 3 notas: \n");
		scanf("%d %d %d",&n1,&n2,&n3);
		
		printf("Digite o codigo do aluno: \n");
		scanf("%d",&cod);
		
		media = (n1+n2+n3)/3;
		
		printf("Media = %.2f\n",media);
	}while(cod != 0);
	
	
    system("pause");
}
