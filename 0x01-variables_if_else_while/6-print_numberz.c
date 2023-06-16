#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints all single digit numbers.
*
* Return: Always 0 (indicating success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
