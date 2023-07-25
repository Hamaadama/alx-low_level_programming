#include "main.h"

/**
 * print_line - print a line of n _
 * @n: number to be considered
 *
 * Return: void, nothing just print
 */


void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
