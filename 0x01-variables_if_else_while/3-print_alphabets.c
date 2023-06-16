#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints the LCA, followed by UCA.
*
* Return: Always 0 (indicating success)
*/
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
