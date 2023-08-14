#include <stdio.h>
#include <stdlib.h>

void cycle_do_while()
{
	system("cls");

	int height = 10, counter;
	do
	{
		counter = 10;
		do
		{
			if (height < 7 && counter < height)
				printf("  ");
			else
				printf("+ ");
			counter--;
		} while (counter > 0);

		counter = 10;
		do
		{
			if (counter < height || counter < 3)
				break;
			printf("+ ");
			counter--;
		} while (counter > 0);
		printf("+\n");
		height--;
	} while (height > 0);
}