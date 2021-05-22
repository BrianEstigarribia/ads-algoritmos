/*------------------------------------------------------------------------------------
 4 A turma C � composta de 60 alunos, e a turma D de 20 alunos.
 Escreva um algoritmo que leia o percentual de alunos reprovados na turma C, 
 o percentual de aprovados na turma D, calcule e escreva:

  a) O n�mero de alunos reprovados na turma C.
  b) O n�mero de alunos reprovados na turma D.
  c) A percentagem de alunos reprovados em rela��o ao total de alunos das duas turmas.
  ok
--------------------------------------------------------------------------------------*/

//bibliotecas uteis para o funcionamento do programa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese"); //para usar acentos 
	float perc_repr_c,perc_apro_d,perc_total,num_repr_c,num_repr_d; //declara��o de v�riaveis 
	
	printf("Percentual de alunos REPROVADOS na turma C: "); //pede ao usuario um valor 
	scanf("%f",&perc_repr_c); //le o valor digitado e armazena na v�riavel perc_repr_c
	
	printf("Percentual de alunos APROVADOS na turma D: "); //pede ao usuario um valor 
	scanf("%f",&perc_apro_d);  //le o valor digitado e armazena na v�riavel perc_apro_d
	//atribuindo opera��es as v�riveis 
	num_repr_c = (60 * perc_repr_c) / 100;
	num_repr_d = 20 * (100 - perc_apro_d) / 100;
	perc_total = (num_repr_c + num_repr_d) * 100 / 80;
	//mostra resultado do opera��o/processamento
	printf("N�mero de alunos REPROVADOS na turma C : %5.2f\n",num_repr_c);
	printf("N�mero de alunos REPROVADOS na turma D : %5.2f\n",num_repr_d);
	printf("Percentual de alunos reprovados em relacao ao TOTAL: %5.2f %%\n",perc_total);
	//pausa no sistema antes do termino do programa 
	system("pause");		
}
