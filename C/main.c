#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("\t\t\t\t======CALCULAR MEDIA ESCOLAR ROBERTO======\n\n");
	float nota1, nota2, nota3, nota4, media;
	printf("\n Entre com a primeira nota: \n");
	scanf("%f",&nota1);
	printf("\n Entre com a Segunda Nota: \n");
	scanf("%f",&nota2);
	printf("\n Entre com a Terceira Nota: \n");
	scanf("%f",&nota3);
	printf("\n Entre com a Quarta Nota: \n");
	scanf("%f",&nota4);
	media=(nota1+nota2+nota3+nota4)/4;
	printf("\nSua media final foi: %.2f\n",media);
	
	if(media>=7){
		printf("\nMEUS PARABENS, VOCE FOI APROVADO.\n");
	}
	if(media<=5){
		printf("\nVOCE ESTA REPROVADO. \n");
	}
    else{
    	printf("\nVOCE FOI PARA A RECUPERACAO.");
	}
	system ("pause");
}

