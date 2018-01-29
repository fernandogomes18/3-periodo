#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float salario,nsalario,vvendas,comis,total;
int ncarros,prem;
void main() {
	salario=1690;
	prem=50;
	printf("Digite a quantidade de carros vendidos:");
	scanf("%d",&ncarros);
	printf("Digite o valor total das vendas:");
	scanf("%f",&vvendas);
	comis=(vvendas*5)/100;
	nsalario=(ncarros*prem);
	total=(nsalario+salario+comis);
	printf("SALARIO COMISSAO:R$ %.2f\n",comis);
	printf("Seu salario foi de: %.2f\n",total);
	system("pause");
}
