#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float salario,bonus;
	
	salario = 1000;
	bonus = salario*(1+0.3);
	
	printf("Seu s�lario e de %f e voc� teve um bonus dando o total de %f",salario,bonus);
}
