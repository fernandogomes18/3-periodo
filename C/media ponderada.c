#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float nota1,nota2,nota3,media;

void main(){
	printf("Digite a sua primeira nota: ");
	scanf("%f",&nota1);
	printf("Digite a sua segunda nota: ");
	scanf("%f",&nota2);
	printf("Digite sua terceira nota: ");
	scanf("%f",&nota3);
	media=(nota1*2+nota2*3+nota3*5)/(2+3+5);
	if (media>=7)
	printf("Aprovado");
	else if((media>=5)&&(media<=6))
	printf("recuperacao");
	else if(media<5)
	printf("Reprovado");

	system("pause");
}
