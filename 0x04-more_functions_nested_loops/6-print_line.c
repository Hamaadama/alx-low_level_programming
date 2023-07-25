#include "main.h"

/**
 * print_line - print a line of n _
 * @n: number to be considered
 *
 * Return: void, nothing just print
 */


void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
