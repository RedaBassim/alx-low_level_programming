#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line in reverse
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= 1; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if  ((j + i) <= size)
				_putchar(' ');
				else
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
