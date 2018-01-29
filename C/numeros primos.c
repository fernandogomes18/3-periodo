#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n\t\t\t\t\t----INFORMAR SE E PRIMO OU NAO----\n");
	int num,i=0;
	printf("\nDIGITE UM NUMERO DESEJAVEL:\t");
	scanf("%d",&num);
	while(i<=num){
		
		if(i % 2==0){
			printf("\nNumero Digitado e Primo.\n");
		i++;
	}
		else{
			printf("\nNAO E PRIMO.\n");
			
	}
	system("pause");

	}

}
