/*
19.	Uma loja de eletrodom�sticos estabeleceu as seguintes modalidades de pagamento para a venda de suas mercadorias:

� vista ........................desconto de 2,5% sobre o pre�o de tabela;
De 2 at� 5 vezes ...............pre�o de tabela, sem desconto ou acr�scimo;
De 6 at� 10 vezes ..............juros de 6% sobre o pre�o de tabela;
De 11 at� 15 vezes ............ juros de 13% sobre o pre�o de tabela.
     
Exemplo: 	pre�o de tabela = R$ 100,00, para pagamento em 8 vezes;
            pre�o total = 100,00 + 6,00 (6% de 100,00) = 106,00;
            cada parcela = 106,00 / 8 = R$ 13,25.

O programa deve ler o pre�o de tabela e o n�mero de vezes em que o pagamento ser� feito, 
e calcular o valor de cada parcela e o pre�o total da compra. 
Exibir, na tela, como segue:

PRE�O DE TABELA: R$ XXXXXXXXX
NUM. DE VEZES: XX
VALOR DE CADA PARCELA: R$ XXXXXXXXX
PRE�O TOTAL: R$ XXXXXXXXX

*/

#include <stdio.h>
#include <stdlib.h>	
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	float preco,valor_parcela = 0,valor_total = 0;
	int qt_parcelas;
	
	printf("Digite o preco da mercadoria: ");
	scanf("%f",&preco);
	
	printf("Digite a quantidade de parcelas: ");
	scanf("%d",&qt_parcelas);
	
	if(qt_parcelas == 1)
	{
		valor_total = preco * 0.985;
	}else
		if(qt_parcelas >= 2 && qt_parcelas <= 5)
		{
			valor_total = preco;
		}else
			if(qt_parcelas >= 6 && qt_parcelas <= 10)
			{
				valor_total = preco * 1.06;
			}else
				if(qt_parcelas >= 11 && qt_parcelas <= 15)
				{
					valor_total = preco * 1.13;
				}
				
	valor_parcela = qt_parcelas / valor_total;
	
	printf("PRE�O DE TABELA: R$%.2f\n",preco);
	printf("NUM. DE VEZES:%d\n",qt_parcelas);
	printf("VALOR DE CADA PARCELA: R$ %.2f\n",valor_parcela);
	printf("PRE�O TOTAL: R$ %.2f\n",valor_total);

	system("pause");	
}
