#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints all possible combinations of single-digit
*
* Return: Always 0 (indicating success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
