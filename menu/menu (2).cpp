#include <stdio.h>
#include <stdlib.h>

int main()
{
	int opcao, acumulador1 = 0, acumulador2 = 0, acumulador3 = 0, acumulador4 = 0, soma, percen1, percen2, percen3, percen4;
	while (1)
	{
		system("cls");
		printf("1 - Dormir.\n");
		printf("2 - Estudar algoritmos.\n");
		printf("3 - Passear.\n");
		printf("4 - Outros.\n");
		printf("5 - Sair.\n");
		printf("Entre com sua opcao: ");
		scanf("%d", &opcao);
		if (opcao == 5)
			break;
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
		}
	}
	printf("%d dormir\n", acumulador1);
	printf("%d estudar\n", acumulador2);
	printf("%d passear\n", acumulador3);
	printf("%d outros\n", acumulador4);
	soma = acumulador1 + acumulador2 + acumulador3 + acumulador4;
	printf("total de votos %d\n", soma);
	percen1 = acumulador1 * 100 / soma;
	percen2 = acumulador2 * 100 / soma;
	percen3 = acumulador3 * 100 / soma;
	percen4 = acumulador4 * 100 / soma;


	printf("percentual = %d\n", percen1);
	printf("percentual = %d\n", percen2);
	printf("percentual = %d\n", percen3);
	printf("percentual = %d\n", percen4);

	if (acumulador1 > acumulador2|| acumulador1>acumulador3||acumulador1>acumulador4)
	{
		printf("o mais votado foi dormir");
	}

else if (acumulador2 > acumulador1|| acumulador2>acumulador3||acumulador2>acumulador4)
	{
		printf("o mais votado foi estudar");
	}
else if (acumulador3 > acumulador1|| acumulador3>acumulador2||acumulador3>acumulador4)
	{
		printf("o mais votado foi passear");
	}
else if (acumulador4 > acumulador1|| acumulador4>acumulador2||acumulador4>acumulador3)
	{
		printf("o mais votado foi outros");
	}



}

