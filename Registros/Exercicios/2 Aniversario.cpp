/*
2)Dados os seguintes campos de um registro nome, dia de aniversario e m�s de aniversario,
desenvolver um algoritmo que mostre em cada um dos messes do ano quem s�o as pessoas que
fazem aniversario, exibir tamb�m o dia. Considere um conjunto de 40 pessoas.

*/
#include <stdio.h>
#include <stdlib.h>

struct cadastro{
        char nome[50];
        int dia ;
        int mes ;
};

void cadastros(struct cadastro p[],int n){
   int i ;
    for(i = 0 ; i < n ;i++)
         {
                fflush(stdin);
                printf("\n Dados do %d - usuario \n ",i+1);
                 printf("\n Insira o nome :  ");
                 gets(p[i].nome);
                 fflush(stdin);
                 printf("\n Dia do Nascimento : ");
                 scanf("%d",&p[i].dia);
                 printf("\n Mes do Nascimento : ");
                 scanf("%d",&p[i].mes);
                 system("cls");
         }     
}

int main()
{
   int i,k,aluno[5];
   struct cadastro a[5];
   cadastros(a,5);
      k = 0;
      for(k = 1; k <=12; k++) { // varre os meses
	  //Aniversariantes do m�s 'k'
	  for(i = 0; i < 5 ; i++) // varre os alunos
      {
        if(a[i].mes == k) // � do m�s?
        {
            aluno[k] = i;
            k++;
        }
		}
	}
}
