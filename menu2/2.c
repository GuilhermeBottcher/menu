#include <stdio.h>
#include<stdlib.h>
int main()
{
	int opcao, acumulador1 = 0, acumulador2 = 0, acumulador3 = 0, acumulador4 = 0, acumulador5 = 0, total = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

	while(1)
	{

		system("cls"),
			   printf("1 - Sertanejo\n");
		printf("2 - Funk\n");
		printf("3 - Techno\n");
		printf("4 - R&B\n");
		printf("5 - Axe\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);
		if(opcao == 0)

		{
			break;
		}

		switch(opcao)

		{
		case 1:

			acumulador1 = acumulador1 + 1;
			break;
		case 2:
			acumulador2 = acumulador2 + 1;
			break;
		case 3:
			acumulador3 = acumulador3 + 1;
			break;
		case 4:
			acumulador4 = acumulador4 + 1;
			break;
		case 5:
			acumulador5 = acumulador5 + 1;
			break;


		}

	}
	total = acumulador1 + acumulador2 + acumulador3 + acumulador4 + acumulador5;
	printf(" total de %d votos em sertanejo\n", acumulador1);
	printf(" total de %d votos em funck\n", acumulador2);
	printf(" total de %d votos em Techno\n", acumulador3);
	printf(" total de %d votos em R&B\n", acumulador4);
	printf(" total de %d votos em Axe\n", acumulador5);
	printf(" total de %d votos\n", total);

	p1 = acumulador1 * 100 / total;
	p2 = acumulador2 * 100 / total;
	p3 = acumulador2 * 100 / total;
	p4 = acumulador4 * 100 / total;
	p5 = acumulador5 * 100 / total;


	printf(" precentual de sertanejo %d\n", p1);
	printf(" precentual de funck %d\n", p2);
	printf(" precentual de techno%d\n", p3);
	printf(" precentual de R&b %d\n", p4);
	printf(" precentual de axe%d\n", p5);
	
	if (acumulador1>acumulador2 || acumulador1>acumulador2 ||acumulador1>acumulador3 ||acumulador1>acumulador4||acumulador1>acumulador5)
	{
		printf("sertanejo mais votado");
	}
	else if (acumulador2>acumulador1 || acumulador2>acumulador3 ||acumulador2>acumulador4 ||acumulador2>acumulador5)
	{
		printf("funck  mais votado");
	}
		else if (acumulador3>acumulador1 || acumulador3>acumulador2 ||acumulador3>acumulador4 ||acumulador3>acumulador5)
	{
		printf("techo  mais votado");
	}
	else if (acumulador4>acumulador1 || acumulador4>acumulador2 ||acumulador4>acumulador3 ||acumulador4>acumulador5)
	{
		printf("R&b  mais votado");
	}
	else if (acumulador5>acumulador1 || acumulador5>acumulador2 ||acumulador5>acumulador3 ||acumulador3>acumulador5)
	{
		printf("axe  mais votado");
	}





}

