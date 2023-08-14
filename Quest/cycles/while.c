#include <stdio.h>
#include <stdlib.h>

void cycle_while()
{
	system("cls");

	int height = 10, counter;
	while (height > 0)
	{
		counter = 10;

		while (counter > 0)
		{
			if (height < 7 && counter < height)
				printf("  ");
			else
				printf("+ ");
			counter--;
		}

		counter = 10;

		while (counter > 0)
		{
			if (counter < height || counter < 3)
				break;
			printf("+ ");
			counter--;
		}

		height--;
		printf("+\n");
	}
}