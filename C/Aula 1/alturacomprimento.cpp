#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	
	int width,length,x;
	
	printf("Informe Altura � Comprimento\n");
	printf("Ex: Altura/Comprimento\n");
	scanf("%d/%d",&length, &width);
	x = length*width;
	fflush(stdin);
	printf("\nA area � de: %d M�", x);
	
	
}
