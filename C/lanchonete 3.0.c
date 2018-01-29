#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//programa que simula uma lanchonete...
//PROGRAMA DE LANCHONETE
float v1,v2,v3,v4,v5,cont,cachorroquente,sorvete,hamburger,cheeseburger,refrigerante,total,totaln,troco,pagamento;
int quantr,quantch,quanth,quants,quantc,op,opf,menuop,mudap,opgerencia,opfim,vgerencia,contador,conty,n;
char nome[15];
void main() {
	cachorroquente=3.50;
	sorvete=1.50;
	hamburger=4.00;
	cheeseburger=3.00;
	refrigerante=3.50;
	n=0;
	while(opfim!=2){
	op=0;
	menuop=0;
	opf=0;
	opgerencia=0;
	mudap=0;
	vgerencia=0;
	opfim=0;
	quantc=0;
	quants=0;
	quantr=0;
	quantch=0;
	quanth=0;
	total=0;
	v1=0;
	v2=0;
	v3=0;
	v4=0;
	v5=0;
	printf("**FOODSYSTEM** \n \n");
	printf("Seja bem-vindo a Lanchonete \n");
	printf("Digite seu nome: ");
	scanf(" %s",&nome);
	printf("%s Escolha um perfil: \n 1-CLIENTE \n 2-GERENTE",nome);
	scanf("%d",&menuop);
//Perfil cliente
	if (menuop!=2){
		while (opf!=2){
			printf("Escolha um produto pelo codigo: \n 100-CACHORRO QUENTE R$ %.2f \n 101-SORVETE R$ %.2f \n 102-HAMBURGER R$ %.2f \n 103-CHEESEBURGER R$ %.2f \n 104-REFRIGERANTE R$ %.2f \n Digite: ",cachorroquente,sorvete,hamburger,cheeseburger,refrigerante);
			scanf("%d",&op);
			n=n+1;	
			if (op==100){
			v1=(cachorroquente);
			quantc=quantc+1;
			v1=(v1*quantc);
			printf("Escolha uma opcao: \n 1-CONTINUAR COMPRANDO \n 2-SAIR \n");
			scanf("%d",&opf);
		
			}
			else if(op==101){
			v2=(sorvete);
			quants=quants+1;
			v2=(v2*quants);
			printf("Escolha uma opcao: \n 1-CONTINUAR COMPRANDO \n 2-SAIR \n ");
			scanf("%d",&opf);
		
			}
			else if(op==102){
			v3=(hamburger);
			quanth=quanth+1;
			v3=(v3*quanth);
			printf("Escolha uma opcao: \n 1-CONTINUAR COMPRANDO \n 2-SAIR \n");
			scanf("%d",&opf);
		
			}
			else if(op==103){
			v4=(cheeseburger);
			quantch=quantch+1;
			v4=(v4*quantch);
			printf("Escolha uma opcao: \n 1-CONTINUAR COMPRANDO \n 2-SAIR \n");
			scanf("%d",&opf);
		
			}
			else if(op==104){
			v5=(refrigerante);
			quantr=quantr+1;
			v5=(v5*quantr);
			printf("Escolha uma opcao: \n 1-CONTINUAR COMPRANDO \n 2-SAIR \n");
			scanf("%d",&opf);
		
			}
			system("cls");	
			total=(v1+v2+v3+v4+v5);
		}
		if (quantc>0){
			printf("Quantidade de cachorro quente: %d \n",quantc);
	
		}
		if (quants>0){
			printf("Quantidade de sorvete: %d \n",quants);
	
		}
		if (quanth>0){
			printf("Quantidade de hamburger: %d \n",quanth);
	
		}
		if (quantch>0){
			printf("Quantidade de cheeseburger: %d \n",quantch);
	
		}
		if (quantr>0){
			printf("Quantidade de refrigerante: %d \n",quantr);
	
		}
		printf(" %s, TOTAL DA COMPRA: R$  %.2f \n ",nome,total);
		printf("VALOR PAGO: ");
		scanf("%f",&pagamento);
		while(pagamento<total){
			troco=(pagamento-total);
			printf(" %s, Voce nao fez o pagamento corretamente , Ainda falta: R$  %.2f",nome,troco);
			printf("VALOR PAGO: R$  ");
			scanf("%f",&pagamento);
			}
		troco=(pagamento-total);
		printf(" %s, O seu pagamento foi de: R$  %.2f e seu troco de:%.2f\nMuito Obrigado\n \n  ",nome,pagamento,troco);
	//	for(cont=1;cont<n;cont=cont++){
	//	totaln=(totaln+total);
	//	}
		printf("Escolha uma opcao:\n1-Voltar ao menu principal\n2-Sair");	
		scanf("%d",&opfim);
	}
	totaln=(totaln+total);
//perfil gerente
	if(menuop==2){
	while(vgerencia!=2){
		printf("Escolha uma opcao:\n1-MUDAR VALORES DOS PRODUTOS\n2-TOTAL DA VENDA\n");
		scanf("%d",&mudap);
		if(mudap==1){
			printf("DIGITE O PRODUTO PARA SER MUDADO:\n1-CACHORRO QUENTE\n2-SORVETE\n3-HAMBURGER\n4-CHEESEBURGER\n5-REFRIGERANTE\n");
			scanf("%d",&opgerencia);
			if(opgerencia==1){
				printf("Digite o novo valor: ");
				scanf("%f",&cachorroquente);
				printf("Gostaria de voltar? 1-SIM 2-NAO");
				scanf("%d",&vgerencia);
			}
											
		
			if(opgerencia==2){
				printf("Digite o novo valor: ");
				scanf("%f",&sorvete);
				printf("Gostaria de voltar? 1-SIM 2-NAO");
				scanf("%d",&vgerencia);								
			}
			if(opgerencia==3){
				printf("Digite o novo valor: ");
				scanf("%f",&hamburger);
				printf("Gostaria de voltar? 1-SIM 2-NAO");
				scanf("%d",&vgerencia);								
			}
			if(opgerencia==4){
				printf("Digite o novo valor: ");
				scanf("%f",&cheeseburger);
				printf("Gostaria de voltar? 1-SIM 2-NAO");
				scanf("%d",&vgerencia);								
			}
			if(opgerencia==5){
				printf("Digite o novo valor: ");
				scanf("%f",&refrigerante);
				printf("Gostaria de voltar? 1-SIM 2-NAO");
				scanf("%d",&vgerencia);								
			}
		}
		if (mudap==2){
			printf("o total do dia e: %.2f \n",totaln);
			printf("Gostaria de voltar? 1-SIM 2-NAO");
			scanf("%d",&vgerencia);	
		}
								
	}
		printf("Escolha uma opcao:\n1-Voltar ao menu principal\n -Sair");
		scanf("%d",&opfim);	
	}	
	}
system("cls");
system ("pause");	
}

	

