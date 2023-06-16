#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints LCA , excluding the letters q and e, folowwed by NL
*
* Return: Always 0 (indicating success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
}
putchar('\n');
return (0);
}
