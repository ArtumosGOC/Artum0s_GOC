#include <stdio.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	float num = 2,cubo,raiz;
	cubo=pow(num,3);
	raiz = sqrt(cubo);
	printf("O resultado ao cubo � %f e sua raiz � %f\n",cubo,raiz);
}
