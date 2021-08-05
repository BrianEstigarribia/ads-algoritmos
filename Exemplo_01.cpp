/* Fazer um programa que recebe quatro valores, a = 24.5, b = 97,
c = 13.6 e d = 84. Realizar os c�lculos abaixo e
imprimir as f�rmulas de c�lculo como o exemplo acima.

a + b + d
a + b + c
c - d - a
b - a - c
b * c
d * a
a / c
b / d
M?dulo a e c
M?dulo de d e a
Raiz quadrada de a
Raiz quadrada de b
ok
*/

//incluindo bibliotecas importantes para o funcionamento do programa
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese"); //para poder usar acentos
	//declara��o de v�riaveis
	float a, c, soma, soma2, sub, sub2, mult, mult2, div, div2, raiz, raiz2;
	int b, d, modulo, modulo2;
	//atribui��o de valores as v�riaveis
	a = 24.5;
	b = 97;
	c = 13.6;
	d = 84;
	//f�rmulas de c�lculos
	soma = a + b + d;
	soma2 = a + b + c;
	sub = c - d - a;
	sub2 = b - d - a;
	mult = b * c;
	mult2 = d * a;
	div = a / c;
	div2 = b / d;
	modulo = (int)a % (int)c;  //resto da divis�o de a por c sem casas decimais 
	modulo2 = d % (int)a;
	raiz = sqrt(a);
	raiz2 = sqrt(b);
	//mostrar resultados dos calculos
	printf("%.1f + %d  + %d     = %.2f\n", a, b, d, soma);
	printf("%.1f + %1d  + %.1f  = %.2f\n", a, b, c, soma2);
	printf("%.1f - %1d  - %.1f  = %.2f\n", c, d, a, sub);
	printf("%d   - %1d  - %.1f  = %.1f\n", b, d, a, sub2);
	printf("%d  * %.1f = %.1f\n", b, c, mult);
	printf("%d  * %.1f = %.2f\n", d, a, mult2);
	printf("%.1f / %.1f = %.2f\n", a, c, div);
	printf("%d   / %1d  = %.2f\n", b, d, div2);
	printf("M�dulo de %.1f com %.1f = %d\n", a, c, modulo);
	printf("M�dulo de %d com %.1f   = %d\n", d, a, modulo2);
	printf("Ra�z de %.1f = %.1f\n", a, raiz);
	printf("Ra�z de %d   = %.2f\n", b, raiz2);
	//pausa no sistema antes do termino do programa
	system("pause");
	return 0;
}
