#include<stdio.h>
main()
{
	int op;
	printf ("Digite um n�mero inteiro!\n");
	scanf("%d", &op);
	switch (op)
	{
		case 1:
			printf("Entrou no caso 1!\n");
			break;
		case 2:
			printf("Entrou no caso 2!\n");
		default:
			printf("Entrou no caso padr�o!\n");
	}
	/*
		a) Qual � a sa�da do programa se a entrada for 1?
		ele entra no case 1 e printa a mensagem "Entrou no caso 1!\n" e finaliza o programa.
		
		
		b) Qual � a sa�da do programa se a entrada for 2?
		ele entra no case 2 e printa a mensagem "Entrou no caso 2!\n" 
		em seguida entra no case default printa a mensagem "Entrou no caso padr�o!\n" e finaliza o programa.
		
		
		c) Qual � a sa�da do programa se a entrada for 3?
		ele printara o case default e printa a mensagem "Entrou no caso padr�o!\n" e finaliza o programa	.
	*/
}
