#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int a,b,x;
	
	printf("Ano que voc� nasceu:");
	scanf("%d",&a);
	fflush(stdin);
	
	printf("Ano que voc� est�:");
	scanf("%d",&b);
	fflush(stdin);
	
	x=b-a;
	fflush(stdin);
	printf("Voc� tem %d anos de idade.", x);
}
