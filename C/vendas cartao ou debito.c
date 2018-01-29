#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int op,menu;
float valor,nvalor,total;
void main() {
	while(menu!=2){
	printf("\nSeja bem vindo\n");
	printf("\nDigite o valor da compra:R$  ");
	scanf("%f",&valor);
	printf("\nEscolha uma opção:\n 1-VENDA A VISTA\n 2-VENDA A PRAZO 30DIAS\n 3-VENDA COM CARTAO DE DEBITO\n 4-VENDA COM CARTAO DE CREDITO\n");
	scanf("%d",&op);
	if(op==1){
		nvalor=(valor*10)/100;
		total=(valor-nvalor);
		printf("O valor total e:R$ %.2f",total);
		printf("\nEscolha uma opcao:\n1-FAZER OUTRA COMPRA\n2-SAIR\n");
		scanf("%d",&menu);
		system("cls");
	}
	if(op==2){
		nvalor=(valor*10)/100;
		total=(valor+nvalor);
		printf("\nO valor total e %.2f",total);
		printf("\nEscolha uma opcao:\n1-FAZER OUTRA COMPRA\n2-SAIR\n");
		scanf("%d",&menu);
		system("cls");
	}
	if(op==3){
		nvalor=(valor*8)/100;
		total=(valor-nvalor);
		printf("\nO valor total e %.2f",total);
		printf("\nEscolha uma opcao:\n1-FAZER OUTRA COMPRA\n2-SAIR\n");
		scanf("%d",&menu);
		system("cls");
	}
	if(op==4){
		nvalor=(valor*5)/100;
		total=(valor+nvalor);
		printf("\nO valor total e %.2f",total);
		printf("\nEscolha uma opcao:\n1-FAZER OUTRA COMPRA\n2-SAIR\n");
		scanf("%d",&menu);
		system("cls");
	}
	}
systm("cls");
system ("pause");
}
