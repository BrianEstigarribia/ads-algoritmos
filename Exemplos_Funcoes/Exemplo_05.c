#include <stdio.h>
#include <stdlib.h>

/*Declara��o da fun��o*/

int soma(int valor1, int valor2)
{
    int s;

    s = valor1 + valor2;
    return(s);
}

main()
{
    int a;

    a = soma(2,3);

    printf("Resultado: %d\n",a);

    system("pause");
}
