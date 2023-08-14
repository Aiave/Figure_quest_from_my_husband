#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "cycles.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	int cycle_selection;
	do
	{
		system("cls");

		printf("Какой цикл будем использовать?\n");
		printf("1. while\n2. do while\n3. for\n\n");
		scanf_s("%d", &cycle_selection);
	} while (cycle_selection < 1 || cycle_selection > 3);

	switch (cycle_selection)
	{
	case 1:
		cycle_while();
		break;
	case 2:
		cycle_do_while();
		break;
	case 3:
		cycle_for();
		break;
	default:
		break;
	}
}