#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int value;
	
	printf("Digite um numero: ");
	scanf("%d",&value);
	fflush(stdin);
	
	if((value%2)==0)
	{
		printf("%d � Par",value);
	}
	else
	{
		printf("%d n�o � Par",value);
	}
}
