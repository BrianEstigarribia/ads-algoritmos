/*
Crie um registro com o nome do funcion�rio, cargo e sal�rio.
Leia este registro p/ um funcion�rio e ao final escreva o conte�do do registro.

*/

#include <stdio.h>
#include <stdlib.h>

struct CAD_FUNCIONARIO
{
    char nome[50];
    char cargo[50];
    float salario;
};

main()
{
   struct CAD_FUNCIONARIO funcionario;

   printf("\t\tCADASTRO DE FUNCIONARIOS\n");
   printf("Digite o nome:    \n");
   scanf("%s",&funcionario.nome);
   printf("Digite o cargo:   \n");
   scanf("%s",&funcionario.cargo);
   printf("Digite o sal�rio: \n");
   scanf("%f",&funcionario.salario);

   printf("\t\tDADOS DO FUNCIONARIO\n");
   printf("Nome: %s\n",funcionario.nome);
   printf("Cargo: %s\n",funcionario.cargo);
   printf("Salario: %5.3f\n",funcionario.salario);

   printf("---------------------------------------\n");

   system("pause");
}
