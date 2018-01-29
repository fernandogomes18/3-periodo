#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i;
void  main() {
	printf("\nImprimindo pares ate 100....\n");
	
	i=0;
	while(i <= 100){
		
		if(i%2==0){
			printf(" %d ",i);
		}
		
		i++;
	}
	
	printf("\n");
	
	printf("\n By: Marina Gomes.\n");
	system("pause");
}

