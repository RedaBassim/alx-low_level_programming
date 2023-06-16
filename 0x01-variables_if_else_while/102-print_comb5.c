#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints all possible combinations of two two-digit numbers,
*              satisfying the given requirements.
*
* Return: Always 0 (indicating success)
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			putchar('0' + (num1 / 10));
			putchar('0' + (num1 % 10));
			putchar(' ');
			putchar('0' + (num2 / 10));
			putchar('0' + (num2 % 10));
			if (num1 != 98 || num2 != 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}

	putchar('\n');
	return (0);
}
