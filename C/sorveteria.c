#include <stdio.h>
#include <stdlib.h>

int main() {
	int sorveteria,quantidadeC=0,quantidadeU=0,quantidadeQ=0;
	int totalvendidos=0,quantidadeCtotal=0,quantidadeUtotal=0,quantidadeQtotal=0;
	float mult1, mult2, mult3, total_arrecadado=0,multtotal1,multtotal2,multtotal3;
	
	while(sorveteria!=4){
	printf("\n\t*********SEJA BEM VINDO A SORVETERIA DO FOGAO*********\n");
	printf("\n_________________________________________________________________________\n"
	       "\nTIPOS---->\t 1\t\t 2\t\t  3\n"
	       "\nPICOLE--->\tCOCO\t\tUVA\t\tQUEIJO\n"
	       "\nPRECO---->\tR$0.50\t\tR$0.60\t\tR$0.75\n"
	       "\nSITE:www.sorveteriadofogao.com.br\nWHATSAPP:9898-7771\nFACEBOOK:sorveteriadofogao.com.br."
		   );
	printf("\n_________________________________________________________________________\n");
    printf("\nENTRE COM O TIPO DE PICOLE OU DIGITE 5-FECHAMENTO:\n");
    scanf("%d",& sorveteria);
    system("cls");
	switch(sorveteria){
		
		case 1:{
			printf("\nSABOR SOLICITADO FOI DE COCO.\n");
			printf("\nDIGITE A QUANTIDADE DESEJADA:\n");
		    scanf("%d",& quantidadeC);
		    mult1=quantidadeC*0.50;
		    quantidadeCtotal=quantidadeCtotal+quantidadeC;
		    multtotal1=multtotal1+mult1;
		    system("cls");
			printf("\nQUANTIDADE DE PICOLES DE COCO VENDIDA FOI:\n\n%.d-UNIDADES\n",quantidadeC);
		    printf("\nTOTAL ARRECADADO NA VENDA FOI:\nR$%.2f\n\n",mult1);
		    break;
			
		case 2:{
			printf("\nSABOR SOLICITADO FOI DE UVA.\n");
			printf("\nDIGITE A QUANTIDADE DESEJADA:\n");
		    scanf("%d",& quantidadeU);
		    mult2=quantidadeU*0.60;
		    quantidadeUtotal=quantidadeUtotal+quantidadeU;
		    multtotal2=multtotal2+mult2;
		    system("cls");
			printf("\nQUANTIDADE DE PICOLES DE UVA VENDIDA FOI:\n\n%.d-UNIDADES\n",quantidadeU);
		    printf("\nTOTAL ARRECADADO NA VENDA FOI:\n\nR$%.2f\n",mult2);
		    break;
		case 3:{
			printf("\nSABOR SOLICITADO FOI DE QUEIJO.\n");
			printf("\nDIGITE A QUANTIDADE DESEJADA:\n");
			scanf("%d",& quantidadeQ);
		    mult3=quantidadeQ*0.75;
		    quantidadeQtotal=quantidadeQtotal+quantidadeQ;
		    multtotal3=multtotal3+mult3;
		    system("cls");
			printf("\nQUANTIDADE DE PICOLES DE QUEIJO VENDIDA FOI:\n\n%.d-UNIDADES\n",quantidadeQ);
			printf("\nTOTAL ARRECADADO NA VENDA FOI:\n\nR$%.2f\n",mult3);
			break;

		default:if(sorveteria==5){
			totalvendidos=quantidadeCtotal+quantidadeUtotal+quantidadeQtotal;
			total_arrecadado=multtotal1+multtotal2+multtotal3;
			printf("\nDetalhamento das Vendas de Picoles no Dia.\n");
			printf("\n%d de coco:\nvalor unitario R$0.50\nTotal R$%.2f\n",quantidadeCtotal, multtotal1);
			printf("\n%d de uva:\nvalor unitario R$0.60\nTotal R$%.2f\n",quantidadeUtotal, multtotal2);
			printf("\n%d de queijo:\nvalor unitario R$0.75\nTotal R$%.2f\n",quantidadeQtotal, multtotal3);
			printf("\n\nFECHAMENTO DO CAIXA!!!\n\n");
			printf("\nTOTAL DE PICOLES VENDIDOS NO DIA:\n%d\n",totalvendidos);
			printf("\nTOTAL ARRECADADOS:\n%.2f\n",total_arrecadado);
			printf(" "
			       " "
			       "\n\n\t\t\t\t\tObrigado Pela Preferencia e Volte Sempre!!!\n "
			);
			break;
        } 
        }
        }
        }
    }
sorveteria=sorveteria+1;
printf("\nDIGITE 0-CONTINUAR OU 4-SAIR:\n");
scanf("%d",&sorveteria);
printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\Processo Terminado com Sucesso.\n");

    }
}

