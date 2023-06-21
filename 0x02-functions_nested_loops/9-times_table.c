#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			printf("%2d ", result);
		}
		printf("\n");
	}
}
