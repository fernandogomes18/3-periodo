#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i;
void main() {
	printf("\n Imprimindo numeros impares ate 100...");
	i=0;
	while(i <= 100){
		if(i%2>0){
		printf(" %d ",i);
	}
	i++;
}
	printf("\n");
	printf("\n By: Marina Gomes.\n");
	system("pause");
}
