#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fat,n;
void main() {
	printf("Programa que calcula fatorial\n ");
	printf("Digite um numero: \n");
	scanf("%d",&n);
	for(fat=1;n>1;n=n-1)
	fat=fat*n;
	printf("O valor do fatorial e: %d\n",fat);
	system ("pause");
}
