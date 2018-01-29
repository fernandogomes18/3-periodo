#include <stdio.h>
#include <stdlib.h>

void main() {
	int fat, n;
	
	printf("\n\t\t\t\tPROGRAMA CALCULO FATORIAL\n");
	printf("\nENTRE COM O VALOR A CALCULAR: \n\n", n);
	scanf("%i",&n);
	fat=1;
	int i;
	for(i=1;i<n; i++){
	fat=fat*(i+1);
}
	printf("\nFATORIAL DE %i e %i\n\n",n,fat);
system("pause");
}
