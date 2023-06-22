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
	unsigned long long int num = 612852475143;
	unsigned long long int factor = 2;
	unsigned long long int largestFactor = 0;

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

	printf("%llu\n", largestFactor);

	return (0);
}
