#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the largest prime factor of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long factor = 2;
	unsigned long largestFactor = 0;

	while (num != 1)
	{
		if (num % factor == 0)
		{
			num = num / factor;
			if (factor > largestFactor)
			{
				largestFactor = factor;
			}
		}
		else
		{
			factor++;
		}
	}

	printf("%lu\n", largestFactor);

	return (0);
}
