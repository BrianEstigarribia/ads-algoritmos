/*
10.	Ler tr�s valores para os lados de um tri�ngulo: A, B e C. Verificar se os lados fornecidos formam realmente um tri�ngulo. 
Se formar, deve ser indicado o tipo de tri�ngulo: Is�sceles, escaleno ou eq�il�tero.

Para verificar se os lados fornecidos formam tri�ngulo: A < B + C  e  B < A + C  e  C < A + B
Tri�ngulo is�sceles: possui dois lados iguais (A=B ou A=C ou B = C)
Tri�ngulo escaleno: possui todos os lados diferentes (A<>B e B <> C)
Tri�ngulo eq�il�tero: possui todos os lados iguais (A=B e B=C)
ok
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	
	printf("Digite 3 valores: ");
	scanf("%d %d %d",&a, &b, &c);
	
	if (a < b + c && b < a + c && c < a + b)
	   printf("Os lados fornecidos formam um triangulo.\n");
	else
       printf("Os lados fornecidos n�o formam um triangulo.\n");   
    if(a == b || a == c || b == c)
        printf("Triangulo is�sceles: possui dois lados iguais\n");
     else
        if(a != b && b != c)  
        
            printf("Triangulo escaleno: possui todos os angulos diferentes\n");
         else
            if(a == b && b == c)//erro
                printf("Tri�ngulo eq�il�tero: possui todos os lados iguais\n");            

	system("pause");
}  
