#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	int per;
	int operacao; float saldo; float deposito; float sacar; int consultar;float saldototal;float saques;float depositos;
	
printf("\nPARA ACESSAR SUA CONTA DIGITE 1-SIM:\n");
scanf(" %c",&per);
system("cls");

while(operacao !=5){

		       printf("\n\t\t********************<<<<<<<<<<CONTA CORRENTE BANCO SANTANDER>>>>>>>>>>********************\n"
		       "\n\n\t\t\t\t\t   SEJA  BEM  VINDO AO SANTANDER MASTER!\n"
		       "\nCLIENTE ESPECIAL.\n"
		       "\nROBERTO CORDEIRO DE ARAUJO.\n"
		       "\nCPF:171.709.437-18.\n"
			   "\nAG: 3939.\n"
			   "\nCC: 21010109-8.\n");

	printf("\nOPERACOES DO CAIXA:\n"
		   "\nVERIFICAR SALDO:    DIGITE [1].\n"
			"REALIZAR DEPOSITOS: DIGITE [2].\n"
			"REALIZAR SAQUES:    DIGITE [3].\n"
			"REALIZAR CONSULTAS: DIGITE [4].\n"
			"\n\t\t\t\t\t10 dias sem juros por mes no cheque especial.\n"
			"\nSAIBA MAIS COM SEU GERENTE.\n");

		       
	printf("\nESCOLHA UMA OPERACAO ACIMA:\n");
	scanf("%d",&operacao);
	system("cls");
	if(operacao==1){
		printf("\nSEU SALDO E:\nR$%.2f\n",saldo);
}
	else if(operacao==2){
		printf("\nFACA SEU DEPOSITO:\nR$");
		scanf("%f",&deposito);
		saldo=saldo+deposito;
		system("cls");
		printf("\nDEPOSITO REALIZADO COM SUCESSO.\n");
		printf("\nSEU SALDO E:\nR$%.2f\n",saldo);
}
    else if(operacao==3){
    	printf("\nQUANTO DESEJA SACAR?\nR$");
    	scanf("%f",&sacar);
		if(sacar>saldo){
			printf("\nVALOR INDISPONIVEL. CONSULTE SEU SALDO!\n");
}
        else if(sacar<=saldo){
        	printf("\nSAQUE REALIZADO COM SUCESSO!\n");
        	saldo=saldo-sacar;
        	printf("\nSEU NOVO SALDO E:\nR$%.2f\n",saldo);
}
}
    else if(operacao==4){
    	printf("\nOPERACAO DE CONSULTA:\n");
    	saldototal=saldo;
    	depositos=deposito;
    	saques=sacar;
    	printf("\nSEU SALDO TOTAL E:\nR$%.2f\n",saldototal);
    	printf("\nFORAM DEPOSITADOS:\nR$%.2f\n",depositos);
    	printf("\nSAQUES REALIZADOS:\nR$%.2f\n",saques);
}
operacao=operacao+1;
printf("\nDIGITE 0-CONTINUAR OU 5-SAIR:\n");
scanf("%d",&operacao);
}

}
