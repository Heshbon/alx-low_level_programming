#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the nine times table
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = b * a;
			if (b == 0)
				printf("%d, ", c);
			else
			{
				printf("%2d", c);
				if (b != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
