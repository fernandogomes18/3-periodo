#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int resul, v1, n, op, i;

void main( ) {
	op =1;
	while(op != 2){
	printf("\n Programa que calcula multiplicacao sem X..\n");
	printf("\n By: Marina gomes\n ");
	
	printf ("Digite 1 Numero: ");
	scanf("%d",&v1);
	
	printf ("\nDigite 2 Numero: ");
	scanf("%d",&n);
	resul =0;
	for(i=0; i < n; i++){
	resul = resul + v1;
	}
	
	
	printf("\nO resultado e: %d\n", resul);
    
	printf("\nDigite: \n1-Continuar\n2-Sair\n");
	scanf("%d",&op);
	if(op == 1){
	system("cls");	
	}
	}  
	
	system("pause");
}
