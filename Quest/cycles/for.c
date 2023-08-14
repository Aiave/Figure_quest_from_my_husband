#include <stdio.h>
#include <stdlib.h>

void cycle_for()
{
	system("cls");

	for (int height = 10; height > 0; height--)
	{
		for (int counter = 10; counter > 0; counter--)
		{
			if (height < 7 && counter < height)
				printf("  ");
			else
				printf("+ ");
		}
		for (int counter = 10; counter > 0; counter--)
		{
			if (counter < height || counter < 3)
				break;
			printf("+ ");
		}
		printf("+\n");
	}
}