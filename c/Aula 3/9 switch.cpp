#include <stdio.h>
#include <locale.h>
#include <ctype.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	int comida;
	printf("Escolha algo para comer:\n1.banana\n2.goiaba\n3.uva\n4.morango\n\nEscolha: ");
	scanf("%d",&comida);
	switch(comida)
	{
		case 1:
			printf("\nVoc� comeu a banana.");
			break;
		case 2:
			printf("\nVoc� comeu a goiaba.");
			break;
		case 3:
			printf("\nVoc� comeu a uva.");
			break;
		case 4:
			printf("\nVoc� comeu a morango.");
			break;
		default:
			printf("\nVoc� fruta n�o est� disponivel.");
			break;
	}
}
