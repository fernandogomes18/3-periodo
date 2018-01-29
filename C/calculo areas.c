#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float lado,base,altura,resul;
int op,i;
void main() {
	printf("Programa que calcula areas \n");
	while(i!=2){
		printf("Escolha uma opcao\n1-QUADRADO\n2-TRIANGULO\n3-RETANGULO\n");
		scanf("%d",&op);
		if(op==1){
			printf("Informe o valor do lado: ");
			scanf("%f",&lado);
			resul=(lado*lado);
			printf("O valor do quadrado e: %.2f\n",resul);
		}
		else if(op==2){
			printf("Informe o valor da base: ");
			scanf("%f",&base);
			printf("Informe o valor da altura: ");
			scanf("%f",&altura);
			resul=(base*altura)/2;
			printf("O valor do triangulo e: %.2f\n",resul);
		}
		else if(op==3){
			printf("Informe o valor da base: ");
			scanf("%f",&base);
			printf("Informe o valor da altura: ");
			scanf("%f",&altura);
			resul=(base*altura);
			printf("O valor do retangulo e: %.2f\n",resul);
		}
		printf("Escolha uma opcao 1-CONTINUAR 2-SAIR\n");
		scanf("%d",&i);
		system("cls");
	}
	system("pause");
}
